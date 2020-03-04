#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,d,p=0;
    vector<int>v;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        int a=v[i];
        //d=v[v[v[i]-1]-1];
        /*cout<<v[i]<<endl;
        cout<<v[v[i]-1]<<endl;
        cout<<v[v[v[i]-1]-1]<<endl;*/
        if(v[v[v[v[i]-1]-1]-1]==v[i])
        {
            /*cout<<v[i]<<endl;
            cout<<v[v[i]-1]<<endl;
            cout<<v[v[v[i]-1]-1]<<endl;*/
            cout<<"YES"<<endl;
            p=1;
            break;

        }
    }
    if(p==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
