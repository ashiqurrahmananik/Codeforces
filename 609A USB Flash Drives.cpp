#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x,y,s=0,c=0;
    vector<int>v;
    cin>>n;
    cin>>y;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<v.size(); i++)
    {
        c++;
        s+=v[i];
        if(s>=y)
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
