#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v1;
    int n,x,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        c=0;
        for(int j=0; j<n; j++)
        {
            if(v[i]==v[j])
            {
                c++;
            }
        }
        v1.push_back(c);
    }
    sort(v1.begin(),v1.end());
    int d=v.size();
    cout<<v1[d-1]<<endl;
    return 0;
}
