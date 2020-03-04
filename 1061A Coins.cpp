#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0,c=0,h=0;
    cin>>n>>s;
    for(;;)
    {
        sum+=n;
        h++;
        if(sum==s)
        {
            if(h>c)
                cout<<h-c<<endl;
            if(h==c)
                cout<<c<<endl;
                //cout<<h<<endl;
            return 0;
        }
        if(sum>s)
        {
            //cout<<sum<<endl;
            sum-=n;
            n--;
            c++;
        }
    }
    return 0;
}
