#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,sum=0;
    cin>>x>>y;
    if(x>y)
    {
        z=x-y;
        sum=y;
        for(int i=2; i<=z; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    if(x<=y)
    {
        z=x-1;
        cout<<z<<endl;
    }
    return 0;
}
