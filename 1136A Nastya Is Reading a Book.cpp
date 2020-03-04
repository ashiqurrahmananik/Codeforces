#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[1000],y[10000],z,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
    cin>>z;
    for(int i=1; i<=n; i++)
    {
        c++;
        if(z<=y[i])
        {
            //cout<<"y="<<y[i]<<endl;
            //cout<<"z="<<z<<endl;
            break;
        }
    }
    //cout<<"n="<<n<<endl;
    //cout<<"c="<<c<<endl;
    if(c==1)
    {
        cout<<n<<endl;
    }
    else
    {
        c--;
        cout<<n-c<<endl;
    }
    return 0;

}
