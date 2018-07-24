#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,scount=0;
    cout<<"Enter the size of bitstream"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the bitstream"<<endl;
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n;i++)
        {
           cout<<ar[i];
            if(ar[i]==1)
            {
                c++;
                if(c==5)
                {
                    cout<<0;
                    c=0;
                }
            }
            else
                c=0;
        }
    return 0;
}
