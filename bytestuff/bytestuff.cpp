#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter no of characters\n";
    int n,i;
    cin>>n;
    char efd,esc;
    cout<<"Enter the character stream"<<endl;
    char ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"Enter the delimiter character"<<endl;
    cin>>efd;
    cout<<"Enter escape character you want to use"<<endl;
    cin>>esc;
    for(i=0;i<n;i++)
    {
        if(ar[i]==efd||ar[i]==esc)
            cout<<esc;
        cout<<ar[i];
    }
            return 0;
}
