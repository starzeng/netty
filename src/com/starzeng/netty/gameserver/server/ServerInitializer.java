package com.starzeng.netty.gameserver.server;

import com.starzeng.netty.gameserver.proto.MessageReqProto;

import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.socket.SocketChannel;
import io.netty.handler.codec.protobuf.ProtobufDecoder;
import io.netty.handler.codec.protobuf.ProtobufEncoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32FrameDecoder;
import io.netty.handler.codec.protobuf.ProtobufVarint32LengthFieldPrepender;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;
import io.netty.handler.ssl.SslContext;

public class ServerInitializer extends ChannelInitializer<SocketChannel> {
	private final SslContext sslCtx;

	public ServerInitializer(SslContext sslCtx) {
		this.sslCtx = sslCtx;
	}

	@Override
	public void initChannel(SocketChannel ch) throws Exception {
		ChannelPipeline pipeline = ch.pipeline();
		// Loger
		pipeline.addLast(new LoggingHandler(LogLevel.INFO));

		if (sslCtx != null) {
			pipeline.addLast(sslCtx.newHandler(ch.alloc()));
		}
		// protobuf 编解码
		// 针对protobuf协议的ProtobufVarint32LengthFieldPrepender()所加的长度属性的解码器
		pipeline.addLast(new ProtobufVarint32FrameDecoder());
		pipeline.addLast(new ProtobufDecoder(MessageReqProto.MessageReq.getDefaultInstance()));
		// 半包解码器 对protobuf协议的的消息头上加上一个长度为32的整形字段，用于标志这个消息的长度。
		pipeline.addLast(new ProtobufVarint32LengthFieldPrepender());
		pipeline.addLast(new ProtobufEncoder());

		// and then business logic.
		pipeline.addLast(new ServerHandler());
	}
	
}
