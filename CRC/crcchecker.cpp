#include <bits/stdc++.h>
using namespace std;
int main()
{
    string code,crc,message,rem;
    cout<<"Enter the msg code"<<endl;
    cin>>code;
    cout<<"Enter the crc polynomial"<<endl;
    cin>>crc;
    int i,j,index;
    message=code;
    string div=message.substr(0,crc.length());
    index=crc.length();
   //cout<<div[2]<<endl<<message;
   while(1)
   {
       if(div[0]==crc[0])
       {
            for(i=0;i<crc.length();i++)
            {
                if(div[i]!=crc[i])
                    rem=rem+"1";
                else
                    rem=rem+"0";
            }
            div=rem;
            rem="";
       }
        else
        {
           for(j=0;j<crc.length()-1;j++)
                div[j]=div[j+1];
            div[(crc.length()-1)]=message[index++];
            continue;
        }
        if(index>=message.length()) break;
   }
   int f=0;
   for(i=0;i<crc.length();i++) if(div[i]=='1') f=1;
   if(f==1)
        cout<<"The messaage was distorted"<<endl;
   else
        cout<<"The messaage integrity is preserved"<<endl;
    return 0;
}

