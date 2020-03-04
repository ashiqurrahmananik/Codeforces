#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,e,h,g,s=0,sum=0;
    char ch[10000],p[10000];
    cin>>n;
    cin.ignore();
    cin.getline(ch,10000);
    cin.getline(p,10000);
    for(int i=0; i<n; i++)
    {
        /*if(ch[i]<p[i] && p[i]>5)
        {
            ch[i]=ch[i]+10;
        }*/
        s=0;
        d=ch[i]-p[i];
        if(ch[i]-p[i]<=-1)
        {
            d=(ch[i]-p[i])*-1;
        }
        if(d>=5)
        {
            if(ch[i]<p[i])
            {
                g=ch[i]+10;
                d=g-p[i];
            }
            h=p[i]+10;
            e=h-ch[i];
            if(e<d)
            {
                sum+=e;
                  //cout<<e<<endl;
                  s=1;

            }


        }
        if(s==0)
        {
            sum+=d;
            //cout<<d<<endl;
        }


    }
    cout<<sum<<endl;
    return 0;
}
