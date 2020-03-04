#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,m=0,c=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x<y)
        {
            c++;
        }
        if(x>y)
        {
            m++;
        }
        if(x==y)
        {
            k++;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    if(m<c)
    {
        cout<<"Chris"<<endl;
    }
    if(m==c || k==n)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
