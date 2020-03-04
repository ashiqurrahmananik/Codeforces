#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,m,h,d,a,b,c,f,g;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    a=(h1*60)+m1;
    b=(h2*60)+m2;
    c=a+b;
    d=c/2;
    f=d/60;
    g=d%60;
    if(g<=9 && f<=9)
    {
        cout<<"0"<<f<<":"<<"0"<<g<<endl;
    }
    else if(g<=9)
    {
        cout<<f<<":"<<"0"<<g<<endl;
    }
    else if(f<=9)
    {
        cout<<"0"<<f<<":"<<g<<endl;
    }

    else
    {
        cout<<f<<":"<<g<<endl;
    }
    return 0;
}
