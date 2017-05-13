package com.starzeng.netty.gameserver.client;

import com.starzeng.netty.gameserver.proto.MessageProto;
import com.starzeng.netty.gameserver.proto.MessageProto.Message;

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
		MessageProto.Message reqMsg = (MessageProto.Message) msg;
		System.out.println(reqMsg.toString());
	}

	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, Throwable cause) throws Exception {
		cause.printStackTrace();
		ctx.close();
	}

	/**
	 * protobuf 请求消息封包
	 * 
	 * @param i
	 * 
	 * @param id
	 * @return
	 */
	private static Message req(int i) {
		MessageProto.Message.Builder message = MessageProto.Message.newBuilder();
		MessageProto.Header.Builder headerBuilder = message.getHeaderBuilder();
		int crcCode = 0xABFF + 1 + 1;
		headerBuilder.setCrcCode(crcCode);
		headerBuilder.setLength(78);
		MessageProto.Body.Builder bodyBuilder = message.getBodyBuilder();
		bodyBuilder.setCode(1000);
		bodyBuilder.putMaps("no", "" + i);
		bodyBuilder.putMaps("name", "小明");
		return message.build();
	}

}
