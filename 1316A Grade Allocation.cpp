#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int t,n,m,x[100000],k=0,s=0;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        while(n--)
        {
            k=0;
            cin>>x[k];
            s+=x[k];
            k++;
        }
        if(s>=m)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        k=0;
        s=0;

    }
    return 0;

}
