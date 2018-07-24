#include <bits/stdc++.h>
using namespace std;
char paritygen(string message,int k)
{
    bool par=true;
    int n=(int)(pow(2,k));
    int skip=n;
    for(int i=n-1;i<message.length();)
    {
        while(skip>0){
        if(message[i++]=='1')
          {
             par=!par;
          }
          skip--;
        }
        if(skip==0)
        {
            i=i+n;
            skip=n;
        }
    }
    if(par==true) return '0'; else return '1';
}
int main()
{
    cout<<"Enter the data"<<endl;
    string data,message;
    cin>>data;
    message=data;
    int i,c=0;
    for(i=0;;i++)
    {
        int p=(int)(pow(2,i));
        if(p<=data.length())
          {
             c++;
             message=message.substr(0,p-1)+"x"+message.substr(p-1,message.length());
          }
          else
            break;
    }
    //cout<<message;
    for(i=0;i<c;i++)
    {
        char parity=paritygen(message,i);
        message[(int)(pow(2,i)-1)]=parity;
    }
    cout<<"Message to be sent is "<<message<<endl;
    return 0;
}
