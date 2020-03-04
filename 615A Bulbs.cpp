#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,k;
     set<int>s;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            cin>>k;
            s.insert(k);
        }
    }
    if(s.size()==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
