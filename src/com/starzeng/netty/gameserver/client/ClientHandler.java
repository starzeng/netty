package com.starzeng.netty.gameserver.client;

import com.starzeng.netty.gameserver.proto.MessageReqProto;

import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;

public class ClientHandler extends SimpleChannelInboundHandler<Object> {

	@Override
	public void channelActive(ChannelHandlerContext ctx) throws Exception {
		for (int i = 0; i < 10; i++) {
			ctx.write(req(i));
		}
		ctx.flush();
	}

	@Override
	protected void channelRead0(ChannelHandlerContext ctx, Object msg) throws Exception {
		System.out.println(msg);
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) throws Exception {
		cause.printStackTrace();
		ctx.close();
	}

	/**
	 * protobuf 请求消息封包
	 * 
	 * @param id
	 * @return
	 */
	private static MessageReqProto.MessageReq req(int id) {
		MessageReqProto.MessageReq.Builder builder = MessageReqProto.MessageReq.newBuilder();
		builder.setId(id);
		builder.setCode(100 + id);
		builder.setDesc("Client: I am is [" + id + "]");
		return builder.build();
	}

	public static void main(String[] args) {
		System.out.println(req(1));
	}

}
