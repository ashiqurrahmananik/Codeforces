#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int x,c=0;
    cin>>x;
    while(1)
    {
        if(x==0)
        {
            cout<<c<<endl;
            return 0;
        }
        if(x-100>=0)
        {
            c++;
            x=x-100;
        }
        else if(x-100<0)
        {
            if(x-20>=0)
            {
                c++;
                x=x-20;
            }
            else if(x-20<0)
            {
                if(x-10>=0)
                {
                    c++;
                    x=x-10;
                }
                else if(x-10<0)
                {
                   if(x-5>=0)
                   {
                       c++;
                       x=x-5;
                   }
                   else if(x-5<0)
                   {
                       if(x-1>=0)
                       {
                           c++;
                           x=x-1;
                       }
                   }
                }
            }

        }
    }
    return 0;
}
