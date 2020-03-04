#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3,d4,d5,a,b,c;
    cin>>d1>>d2>>d3;
    if(d1>d2 && d1>d3)
    {
        a=d1;
        b=d2;
        c=d3;
    }
    else if(d2>d1 && d2>d3)
    {
        a=d2;
        b=d1;
        c=d3;
    }
    else if(d3>d1 && d3>d2)
    {
        a=d3;
        b=d1;
        c=d2;
    }
    if(d1==d2 && d2==d3 && d1==d3)
    {
        cout<<d1+d2+d3<<endl;
        return 0;
    }
    d4=b+b+c+c;
    d5=a+b+c;
    if(d5>d4)
    cout<<d4<<endl;
    else
        cout<<d5<<endl;
    return 0;
}
