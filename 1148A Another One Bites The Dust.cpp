#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,x;
    cin>>a>>b>>x;
    if(a==b)
    {
        cout<<a+b+(2*x)<<endl;
    }
    else if(a<b)
    {
        cout<<a+(a+1)+(2*x)<<endl;
    }
    else if(a>b)
    {
        cout<<b+(b+1)+(2*x)<<endl;
    }
    return 0;
}
