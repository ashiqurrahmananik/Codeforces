#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,s,a,b,c=0;
    cin>>n;
    while(1)
    {
        c++;
        a=n-c;
        a=a-c;
        if(a%3!=0 && c%3!=0)
        {
            cout<<c<<" "<<c<<" "<<a<<endl;
            break;
        }
    }
    return 0;
}
