#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10000],c=0,e=0,g=0;
    double n,d;
    cin>>n;
    d=ceil(n/2);
    for(int i=1; i<=n; i++)
    {
        cin>>x[i];
        if(x[i]>0)
        {
            c++;
        }
        if(x[i]<0)
        {
            e++;
        }
    }
    int t=1,k=2;
    for(int j=t; j<=n; j++)
    {
        //cout<<x[j]<<endl;
        if(x[j]%k==0 && x[j]!=0)
        {
            //cout<<x[j]<<" "<<k<<endl;
            k++;
            t=0;
            j=t;
        }
    }
    int f=1,l=-2;
    for(int j=f; j<=n; j++)
    {
        //cout<<x[j]<<endl;
        if(x[j]%l==0 && x[j]!=0)
        {
            //cout<<x[j]<<" "<<k<<endl;
            l--;
            f=0;
            j=f;
        }
    }
    if(c>=e)
    {
        if(c>=d)
        {
            cout<<k<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    else
    {
        if(e>=d)
        {
            cout<<l<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }


    return 0;

}
