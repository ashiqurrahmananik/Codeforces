#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        sum+=k*i;

    }
    if(n>=sum)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum-n<<endl;
    }

    return 0;
}
