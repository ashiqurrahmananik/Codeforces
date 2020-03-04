#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,a,b,i,g;
    long long int sum=0,c=0,d=0,s=0,h=0,x;
    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>n>>a>>b;
        sum=0,c=0,d=0,h=0,g=0,s=0,x=0;
        if(n%2==0)
        {
            h=n/2;
            d=b*h;
        }
        else
        {
            h=n/2;
            //cout<<"h="<<h<<endl;
            d=b*h+a*1;
            //cout<<"d="<<d<<endl;
        }
        g=n*a;
        //cout<<"g="<<g<<endl;
        if(g<d)
            cout<<g<<endl;
        else
            cout<<d<<endl;
    }
    return 0;
}
