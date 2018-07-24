import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.*;
class Client
{
	public static void main(String args[])throws Exception
	{
		Socket s=new Socket("127.0.0.1",1234);
		DataInputStream din=new DataInputStream(s.getInputStream());
		DataOutputStream dout=new DataOutputStream(s.getOutputStream());
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s1="",s2="";
		while(!s1.equals("stop"))
		{
			s1=br.readLine();
			dout.writeUTF(s1);
			dout.flush();
		
			s2=din.readUTF();
			System.out.println("Server Says -->"+s2+"\n");			
		}
		din.close();
		s.close();
		
	}
}