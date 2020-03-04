#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,c=0,d=0,j;
    cin>>n;
    for(j=1; j<=n; j++)
    {
        c=0;
        for(i=1; i<=3; i++)
        {
            cin>>x;
            if(x==1)
            {
                c++;
                //cout<<"c="<<c<<endl;
                if(c==2)
                {
                    d++;
                    //break;
                    //cout<<"d="<<d<<endl;
                }
            }
        }
    }
    cout<<d<<endl;
    return 0;
}
