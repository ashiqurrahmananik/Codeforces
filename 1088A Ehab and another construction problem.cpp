#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           if(i%j==0 && i/j<n && i*j>n)
           {
               cout<<i<<" "<<j<<endl;
               p=1;
               break;
           }
        }
        if(p==1)
        {
            break;
        }
    }
    if(p==0)
    {
        cout<<-1<<endl;
    }
    return 0;
}
