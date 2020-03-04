#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,n,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>y>>a>>b;
        int k=y-x;
        int s=a+b;
        if(k%s!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<k/s<<endl;
        }
    }
    return 0;
}
