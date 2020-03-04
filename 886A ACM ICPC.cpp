#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0,d;
    vector<int>v(6);
    cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4]>>v[5];
    s=v[0]+v[1]+v[2]+v[3]+v[4]+v[5];
    if(v[0]+v[1]+v[2]==v[3]+v[4]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[0]+v[3]+v[2]==v[1]+v[4]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[0]+v[3]+v[4]==v[1]+v[2]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[0]+v[1]+v[2]==v[3]+v[4]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[3]+v[1]+v[4]==v[0]+v[2]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[3]+v[2]+v[4]==v[0]+v[1]+v[5])
    {
        cout<<"YES"<<endl;
    }
    else if(v[3]+v[1]+v[5]==v[0]+v[2]+v[4])
    {
        cout<<"YES"<<endl;
    }
    else if(v[3]+v[2]+v[5]==v[0]+v[1]+v[4])
    {
        cout<<"YES"<<endl;
    }
    else if(v[0]+v[1]+v[3]==v[2]+v[5]+v[4])
    {
        cout<<"YES"<<endl;
    }
    else if(v[0]+v[3]+v[5]==v[1]+v[2]+v[4])
    {
        cout<<"YES"<<endl;
    }
    else if(v[1]+v[2]+v[3]==v[0]+v[5]+v[4])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
