#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector< int> v;
    int n,s=0,a,b,c,d,p=0,t;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        p++;
        cin>>a>>b>>c>>d;
        s=a+b+c+d;
        v.push_back(s);
        if(i==1)
        {
           t=s;
        }
        s=0;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]==t)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
