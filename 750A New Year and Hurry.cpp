#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,s,j;
    cin>>x>>y;
    s=20*60;
    a=24*60;
    b=a-y;
    j=x;
    for(int i=1;i<=x;i++)
    {
        s+=i*5;
        if(s>b)
        {
            s-=i*5;
            j=i-1;
            break;
        }
    }
    cout<<j<<endl;
}
