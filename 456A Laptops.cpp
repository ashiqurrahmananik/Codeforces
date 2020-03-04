#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;
        if(x!=y)
            c=1;
    }
    if(c==1)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;

    return 0;

}
