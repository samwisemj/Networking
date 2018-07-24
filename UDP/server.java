import java.net.*;
import java.io.*;
class server
{
	public static void main(String args[]) throws Exception
	{
		InetAddress host=InetAddress.getByName("localhost");
		int port=3333;
		DatagramSocket ds=new DatagramSocket(2222);
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String msg1="",msg2="";
		byte buff[]=new byte[400];
		while(!msg1.equals("bye"))
		{
			msg1=(String)br.readLine();
			byte ar[]=msg1.getBytes();
			DatagramPacket dp1=new DatagramPacket(ar,ar.length,host,port);
			ds.send(dp1);
			DatagramPacket dp2=new DatagramPacket(buff,400);
			ds.receive(dp2);
			msg2=new String(dp2.getData(),0,dp2.getLength());
			System.out.println("Client says>>"+msg2);
		}
		ds.close();
	}
}