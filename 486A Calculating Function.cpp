#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,d,e;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        d=n/2;
        e=(d+1)*(-1);
        cout<<e<<endl;
    }
    return 0;
}
