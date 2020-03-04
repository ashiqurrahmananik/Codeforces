#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,z;
    cin>>a>>b>>c>>d>>e;
    z=a+b+c+d+e;
    if(z%5==0 && z!=0)
    {
        cout<<z/5<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
