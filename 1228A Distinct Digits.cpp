#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    set<ll int>s;
    ll int l,r,n,c,g,flag=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        n=i;
        //cout<<i<<endl;
        c=0;
        while(n!=0)
        {
            g=n%10;
            //cout<<g<<endl;
            n=n/10;
            s.insert(g);
            c++;
        }
        if(c==s.size())
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
        s.clear();
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    return 0;
}
