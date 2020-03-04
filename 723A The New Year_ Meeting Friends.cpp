#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,arr[1000],mini=1e6;
    cin>>x>>y>>z;
    arr[1]=(fabs(x-y)+fabs(x-z));
    arr[2]=(fabs(y-x)+fabs(y-z));
    arr[3]=(fabs(z-x)+fabs(z-y));
    for(int i=1;i<=3;i++)
    {
        //cout<<arr[1]<<endl;
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout<<mini<<endl;
    return 0;
}
