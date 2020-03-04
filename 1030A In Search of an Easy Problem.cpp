#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            c++;
        }
    }
    if(c>=1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}
