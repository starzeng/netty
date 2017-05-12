package com.starzeng.netty.gameserver.client;

import java.io.File;

import io.netty.bootstrap.Bootstrap;
import io.netty.channel.ChannelOption;
import io.netty.channel.EventLoopGroup;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioSocketChannel;
import io.netty.handler.ssl.SslContext;
import io.netty.handler.ssl.SslContextBuilder;

public class Client {
	static final boolean SSL = true;// System.getProperty("ssl") != null;
	static final String HOST = System.getProperty("host", "127.0.0.1");
	static final int PORT = Integer.parseInt(System.getProperty("port", "8992"));

	public static void main(String[] args) throws Exception {
		// Configure SSL.
		final SslContext sslCtx;
		if (SSL) {
			// sslCtx =
			// SslContextBuilder.forClient().trustManager(InsecureTrustManagerFactory.INSTANCE).build();
			File tccf = new File("G:/netty/workspace/netty/SSL/keyutil_4866547130715718621.crt");
			sslCtx = SslContextBuilder.forClient().trustManager(tccf).build();
		} else {
			sslCtx = null;
		}

		EventLoopGroup group = new NioEventLoopGroup();
		try {
			Bootstrap b = new Bootstrap();
			b.group(group)//
					.channel(NioSocketChannel.class)//
					.option(ChannelOption.TCP_NODELAY, true)//
					.handler(new ClientInitializer(sslCtx));

			b.connect(HOST, PORT).sync().channel().closeFuture().sync();
		} finally {
			group.shutdownGracefully();
		}
	}

}
