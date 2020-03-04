#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long double n,x,p,s=0;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        s=0;
        for(ll j=1;j<=x;j++)
        {
            cin>>p;
            s=s+p;
        }
        ll l=ceil(s/x);
        cout<<l<<endl;
    }
    return 0;
}
