#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter bitstream length u wanna unstuff"<<endl;
    int n,i,c=0;
    cin>>n;
    int ar[n];
    cout<<"Enter bitstream seperated by space"<<endl;
    for(i=0;i<n;i++)
        cin>>ar[i];
        cout<<"Unstuffed bitstream is"<<endl;
    for(i=0;i<n;i++)
    {
        if(ar[i]==0&&c==5)
        {
            c=0;
            continue;
        }
        else if(ar[i]==0)
            c=0;
        else
            c++;
        cout<<ar[i];
    }
    return 0;
}
