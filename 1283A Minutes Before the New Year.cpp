#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int h,m;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>h>>m;
        int s=(h*60)+m;
        int k=24*60;
        cout<<k-s<<endl;
    }
    return 0;
}
