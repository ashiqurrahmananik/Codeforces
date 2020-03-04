#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int a,b,c,d;
    cin>>a;
    s.insert(a);
    cin>>b;
    s.insert(b);
    cin>>c;
    s.insert(c);
    cin>>d;
    s.insert(d);
    if(s.size()==4)
    {
        cout<<0<<endl;
    }
    if(s.size()==3)
    {
        cout<<1<<endl;
    }
    if(s.size()==2)
    {
        cout<<2<<endl;
    }
    if(s.size()==1)
    {
        cout<<3<<endl;
    }
    return 0;
}
