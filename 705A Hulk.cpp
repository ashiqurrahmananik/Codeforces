#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,c=0,e;
    cin>>n;
    if(n%2==0)
    {
        d=n/2;
        for(int i=1; i<n; i++)
        {
            cout<<"I hate that"<<" ";
            c++;
            if(c==d)
            {
                break;
            }
            cout<<"I love that"<<" ";
        }
        cout<<"I love it"<<endl;
    }
    else
    {
        e=n/2;
        for(int i=1; i<=e; i++)
        {
            cout<<"I hate that"<<" ";
            cout<<"I love that"<<" ";
        }
        cout<<"I hate it"<<endl;

    }
    return 0;
}
