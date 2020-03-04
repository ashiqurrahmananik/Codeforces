#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,p=101,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(y<p)
        {
            p=y;
           s+=x*p;
        }
        else
        {
            s+=x*p;
        }
    }
    cout<<s<<endl;
}
