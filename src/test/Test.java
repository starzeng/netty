package test;

import com.starzeng.netty.gameserver.proto.MessageProto;

public class Test {

	public static void main(String[] args) {
		MessageProto.Message.Builder message = MessageProto.Message.newBuilder();
		MessageProto.Header.Builder headerBuilder = message.getHeaderBuilder();
		int crcCode = 0xABFF + 1 + 1;
		headerBuilder.setCrcCode(crcCode);
		headerBuilder.setLength(78);
		MessageProto.Body.Builder bodyBuilder = message.getBodyBuilder();
		bodyBuilder.setCode(1000);
		// Map<String, String> maps = new HashMap<String, String>();
		// maps.put("id", "32");
		// maps.put("name", "小红");
		// maps.put("job", "后端工程师");
		// bodyBuilder.putAllMaps(maps);
		bodyBuilder.putMaps("id", "687");
		bodyBuilder.putMaps("name", "小明");

		System.out.println(message.build());

	}

}
