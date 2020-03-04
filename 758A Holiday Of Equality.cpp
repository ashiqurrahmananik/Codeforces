#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,mx=0,sum=0,s=0,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>x;
       if(x>mx)
       {
           mx=x;
       }
       v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        s=mx-v[i];
        sum+=s;
    }
    cout<<sum<<endl;
}
