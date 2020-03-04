#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        c++;
        if(i%2==1)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        if(i%2==0 && c==2)
        {

            for(int j=1; j<=m; j++)
            {
                if(j!=m)
                {
                    cout<<".";
                }
                if(j==m)
                {
                    cout<<"#";
                }
            }
            cout<<endl;
        }
        if(i%2==0 && c==4)
        {
            c=0;
            cout<<"#";
            for(int j=1; j<m; j++)
            {
                cout<<".";
            }
            cout<<endl;
        }

    }

}
