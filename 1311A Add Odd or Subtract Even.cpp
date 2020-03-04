#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            int s=b-a;
            if(s%2!=0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(a>b)
        {
            int s=a-b;
            if(s%2!=0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
