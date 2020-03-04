#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,c=0;
    cin>>x>>y>>z;
    while(1)
    {
        x=x-1;
        y=y-2;
        z=z-4;
        if(x>=0 && y>=0 && z>=0)
        {
            c++;
        }
        if(x<0 || y<0 || z<0)
        {
            break;
        }
    }
    cout<<1*c+2*c+4*c<<endl;
    return 0;
}
