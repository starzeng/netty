package com.starzeng.netty.gameserver.server;

import java.net.InetAddress;

import com.starzeng.netty.gameserver.proto.MessageProto;
import com.starzeng.netty.gameserver.proto.MessageProto.Message;

import io.netty.channel.Channel;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.channel.group.ChannelGroup;
import io.netty.channel.group.DefaultChannelGroup;
import io.netty.handler.ssl.SslHandler;
import io.netty.util.concurrent.Future;
import io.netty.util.concurrent.GenericFutureListener;
import io.netty.util.concurrent.GlobalEventExecutor;

public class ServerHandler extends SimpleChannelInboundHandler<Object> {
	// the global channel
	static final ChannelGroup channels = new DefaultChannelGroup(GlobalEventExecutor.INSTANCE);

	@Override
	public void channelActive(final ChannelHandlerContext ctx) {
		// Once session is secured, send a greeting and register the channel to
		// list so the channel received the messages from others.
		ctx.pipeline().get(SslHandler.class).handshakeFuture()
				.addListener(new GenericFutureListener<Future<Channel>>() {
					@Override
					public void operationComplete(Future<Channel> future) throws Exception {
						String host = InetAddress.getLocalHost().getHostName();
						System.out.println("Welcome to " + host + " secure chat service!\n");
						String sslStr = ctx.pipeline().get(SslHandler.class).engine().getSession().getCipherSuite();
						System.out.println("Your session is protected by " + sslStr + " cipher suite.\n");
						channels.add(ctx.channel());
					}
				});
	}

	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg) throws Exception {
		MessageProto.Message reqMsg = (MessageProto.Message) msg;
		System.out.println(reqMsg.toString());
		ctx.writeAndFlush(resp());
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();
	}

	/**
	 * protobuf 响应消息封包
	 * 
	 * @return
	 */
	private static Message resp() {
		MessageProto.Message.Builder message = MessageProto.Message.newBuilder();
		MessageProto.Body.Builder bodyBuilder = message.getBodyBuilder();
		bodyBuilder.setCode(2000);
		return message.build();
	}

}
