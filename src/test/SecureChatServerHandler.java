package test;

import java.net.InetAddress;

import io.netty.channel.Channel;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.channel.group.ChannelGroup;
import io.netty.channel.group.DefaultChannelGroup;
import io.netty.handler.ssl.SslHandler;
import io.netty.util.concurrent.Future;
import io.netty.util.concurrent.GenericFutureListener;
import io.netty.util.concurrent.GlobalEventExecutor;

public class SecureChatServerHandler extends SimpleChannelInboundHandler<String> {
	static final ChannelGroup channels = new DefaultChannelGroup(GlobalEventExecutor.INSTANCE);

	@Override
	public void channelActive(final ChannelHandlerContext ctx) {
		System.out.println(ctx.channel().remoteAddress());
		ctx.writeAndFlush("欢迎您! \n");
		channels.add(ctx.channel());
	}

	@Override
	public void channelRead0(ChannelHandlerContext ctx, String msg) throws Exception {
		System.out.println(msg);
		ctx.writeAndFlush("[" + ctx.channel().remoteAddress() + "] " + msg + '\n');
		ctx.writeAndFlush("[you] " + msg + '\n');
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) {
		cause.printStackTrace();
		ctx.close();
	}
}
