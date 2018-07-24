import java.io.*;
//import java.net.ServerSocket;
//import java.net.Socket;
import java.net.*;
class Server
{
	public static void main(String args[])throws Exception
	{
		ServerSocket ss=new ServerSocket(1234);
		Socket s=ss.accept();
		DataInputStream din=new DataInputStream(s.getInputStream());
		DataOutputStream dout=new DataOutputStream(s.getOutputStream());
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s1="",s2="";
		while(!s1.equals("stop"))
		{
		
			s1=din.readUTF();
			System.out.println("Client Says -->"+s1);
			s2=br.readLine();
			dout.writeUTF(s2);
			dout.flush();
		}
		din.close();
		s.close();
		ss.close();
	}
}