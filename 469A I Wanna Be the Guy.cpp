#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>myset;
    int i,j,x,y,lvl;
    cin>>lvl;
    for(j=1;j<=2;j++)
    {
        cin>>x;
        for(i=1;i<=x;i++)
        {
            cin>>y;
            myset.insert(y);
        }
    }
    if(myset.size()==lvl)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
