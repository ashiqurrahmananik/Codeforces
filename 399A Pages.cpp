#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,arr[10100],brr[10100];
    cin>>n>>p>>k;
    int d=p;
    int e=p;
    int f=p;
    for(int i=1; i<=k; i++)
    {
        d=d+1;
        arr[i]=d;
        if(f>1)
        {
            f=f-1;
            brr[i]=f;
        }
    }
    /*for(int i=1; i<=k; i++)
    {
        cout<<"1:"<<arr[i]<<" "<<endl;
        cout<<"2:"<<brr[i]<<" "<<endl;
    }*/
    if(brr[k]>1)
    {
        cout<<"<<"<<" ";
    }
    for(int i=k; i>=1; i--)
    {
        if(brr[i]>=1)
        cout<<brr[i]<<" ";
    }
    cout<<"("<<e<<")"<<" ";
    for(int i=1; i<=k; i++)
    {
        if(arr[i]<=n)
        cout<<arr[i]<<" ";
    }
    if(arr[k]<n)
    {
        cout<<">>"<<endl;
    }
    else
    {
        cout<<endl;
    }
    return 0;
}
