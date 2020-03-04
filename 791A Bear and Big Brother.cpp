#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,c=0;
    cin>>x>>y;
    while(1)
    {
        c++;
        x=x*3;
        y=y*2;
        if(x>y)
        {
            cout<<c<<endl;
            break;
        }
    }
    return 0;
}
