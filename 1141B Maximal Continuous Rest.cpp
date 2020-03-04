#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0,n,d,g=0,l=0;
    vector<int>v,m;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            c++;
            if(i==n-1)
            {
                if(v[0]==1)
                {
                    c+=m[0];
                    m.push_back(c);
                }
                else
                {
                    m.push_back(c);
                }
            }
        }
        else
        {
            //cout<<"c="<<c<<endl;
            m.push_back(c);
            c=0;
        }
        if(v[i]==0)
        {
            g++;
        }
        if(v[i]==1)
        {
            l++;
        }

    }
    if(g==n)
    {
        cout<<0<<endl;
    }
    else if(l==n)
    {
        cout<<n<<endl;
    }
    else
    {
        sort(m.begin(),m.end());
        d=m.size();
        cout<<m[d-1]<<endl;
    }
}
