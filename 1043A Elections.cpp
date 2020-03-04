#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x,s=0,mx=0,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s+=x;
        if(x>=mx)
        {
            mx=x;
        }
    }
    while(1)
    {
        d=n*mx;
        if(d-s>s)
        {
            cout<<mx<<endl;
            break;
        }
        mx++;
    }
    return 0;
}
