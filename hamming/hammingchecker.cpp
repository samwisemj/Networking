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
    int i,c=0,eb=0;
    for(i=0;;i++)
    {
        int p=(int)(pow(2,i));
        if(p<=data.length()){
        char parity=paritygen(data,i);
        if(parity!='0')
            eb=eb+p;
        }
        else break;
    }
    if(eb>0)
        cout<<"There was a problem in the "<<eb<<" bit of this data"<<endl;
    else
        cout<<"Message is ok";
    return 0;

}
