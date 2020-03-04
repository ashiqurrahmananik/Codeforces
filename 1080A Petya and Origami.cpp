#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,k;
    cin>>n>>k;
    double a=n*2;
    double b=n*5;
    double c=n*8;
    long double d=ceil(a/k);
    long double e=ceil(b/k);
    long double f=ceil(c/k);
    //cout<<d<<" "<<e<<" "<<f<<endl;
    long long int j=d;
    long long int l=e;
    long long int p=f;
    cout<<j+l+p<<endl;
    return 0;
}
