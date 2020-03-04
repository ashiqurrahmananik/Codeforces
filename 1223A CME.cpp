#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       int x;
       cin>>x;
       if(x==2)
       {
           cout<<2<<endl;
           continue;
       }
       if(x%2==0)
       {
           cout<<0<<endl;
       }
       else
       {
           cout<<1<<endl;
       }
    }
    return 0;

}
