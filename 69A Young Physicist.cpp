#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10000],j=1,k=2,l=3,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(int i=1; i<=n*3; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n*3; i++)
    {
        sum1+=arr[j];
        j=j+3;
        sum2+=arr[k];
        k=k+3;
        sum3+=arr[l];
        l=l+3;
    }
    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
