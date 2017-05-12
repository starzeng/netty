package com.starzeng.netty.gameserver.server;

import java.io.File;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioServerSocketChannel;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;
import io.netty.handler.ssl.SslContext;
import io.netty.handler.ssl.SslContextBuilder;

public class Server {
	static final boolean SSL = true;// System.getProperty("ssl") != null;
	static final int PORT = Integer.parseInt(System.getProperty("port", "8992"));

	public static void main(String[] args) throws Exception {
		// Configure SSL.
		final SslContext sslCtx;
		if (SSL) {
			// SelfSignedCertificate ssc = new SelfSignedCertificate();
			// sslCtx = SslContextBuilder.forServer(ssc.certificate(),
			// ssc.privateKey()).build();
			File keyCertChainFile = new File("G:/netty/workspace/netty/SSL/keyutil_4866547130715718621.crt");
			File keyFile = new File("G:/netty/workspace/netty/SSL/keyutil_4126654367028582037.key");
			sslCtx = SslContextBuilder.forServer(keyCertChainFile, keyFile).build();
		} else {
			sslCtx = null;
		}

		EventLoopGroup bossGroup = new NioEventLoopGroup(1);
		EventLoopGroup workerGroup = new NioEventLoopGroup();
		try {
			ServerBootstrap b = new ServerBootstrap();
			b.group(bossGroup, workerGroup)//
					.channel(NioServerSocketChannel.class)//
					.option(ChannelOption.SO_BACKLOG, 100)//
					.handler(new LoggingHandler(LogLevel.INFO))//
					.childHandler(new ServerInitializer(sslCtx));

			b.bind(PORT).sync().channel().closeFuture().sync();
		} finally {
			bossGroup.shutdownGracefully();
			workerGroup.shutdownGracefully();
		}
	}

}
