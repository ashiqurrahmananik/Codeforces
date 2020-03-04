#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a;
    cin>>x>>y;
    if(x<y)
    {
        a=y-x;
        cout<<x<<" "<<a/2<<endl;
    }
    if(x>y)
    {
        a=x-y;
        cout<<y<<" "<<a/2<<endl;
    }
    if(x==y)
    {
        cout<<x<<" "<<0<<endl;
    }
    return 0;
}
