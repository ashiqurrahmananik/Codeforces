#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=3;
    cin>>n;
    int p=n/2;
    for(int i=1; i<=n/2; i++)
    {
        cout<<"*";
    }
    cout<<"D";
    for(int i=1; i<=n/2; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=(n-3)/2; i++)
    {
        for(int i=1; i<=p-1; i++)
        {
            cout<<"*";
        }
        for(int i=1; i<=k; i++)
        {
            cout<<"D";
        }
        for(int i=1; i<=p-1; i++)
        {
            cout<<"*";
        }
        p--;
        k+=2;
        cout<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<"D";
    }
    cout<<endl;
    p=1,k=n-2;
    for(int i=1; i<=(n-3)/2; i++)
    {
        for(int i=1; i<=p; i++)
        {
            cout<<"*";
        }
        for(int i=1; i<=k; i++)
        {
            cout<<"D";
        }
        for(int i=1; i<=p; i++)
        {
            cout<<"*";
        }
        p++;
        k-=2;
        cout<<endl;
    }
    for(int i=1; i<=n/2; i++)
    {
        cout<<"*";
    }
    cout<<"D";
    for(int i=1; i<=n/2; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    return 0;
}
