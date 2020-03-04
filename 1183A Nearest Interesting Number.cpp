#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n,s=0,k=0;
    cin>>n;
    for(ll int i=n; i<=1100; i++)
    {
        s=0;
        k=i;
        //cout<<"i="<<i<<endl;
        while(k>0)
        {
            s+=k%10;
            k=k/10;
        }
        //cout<<s<<endl;
        if(s%4==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
