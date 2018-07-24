import java.net.*;
import java.io.*;
class client
{
	public static void main(String args[])throws Exception
	{
		InetAddress host=InetAddress.getByName("localhost");
		System.out.println(host);
		int port=2222;
		DatagramSocket ds=new DatagramSocket(3333);
		byte buff[]=new byte[400];
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String msg1="",msg2="";
		while(!msg2.equals("bye"))
		{
			DatagramPacket dp2=new DatagramPacket(buff,400);
			ds.receive(dp2);
			msg2=new String(dp2.getData(),0,dp2.getLength());
			System.out.println("Server Says>>"+msg2);
			msg1=(String)br.readLine();
			byte ar[]=msg1.getBytes();
			DatagramPacket dp1=new DatagramPacket(ar,ar.length,host,port);
			ds.send(dp1);
		}	
		ds.close();
	}
}