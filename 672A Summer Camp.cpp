#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,a,b,c,d;
    cin>>n;
    for(int i=1;i<=1000;i++)
    {
        if(i<=9)
        {
            v.push_back(i);
        }
        else if(i>9 && i<=99)
        {
            d=i;
            a=d%10;
            b=d/10;
            v.push_back(b);
            v.push_back(a);
        }
        else if(i>99 && i<=999)
        {
            d=i;
            a=d%10;
            b=d/10;
            c=b%10;
            v.push_back(b/10);
            v.push_back(c);
            v.push_back(a);
        }
        else if(n==1000)
        {
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
        }
    }
    cout<<v[n-1]<<endl;
    /*for(int i=0;i<=20;i++)
    {
        cout<<v[i]<<endl;
    }*/
    return 0;
}
