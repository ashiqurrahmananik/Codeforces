#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,s;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        s=a+b+c;
        cout<<s/2<<endl;
    }
    return 0;
}
