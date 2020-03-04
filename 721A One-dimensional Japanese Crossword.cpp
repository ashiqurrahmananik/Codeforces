#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,c=0,d=0;
    char ch[120];
    cin>>n;
    cin.ignore();
    cin.getline(ch,120);
    for(int i=0; i<n; i++)
    {
        if(ch[i]=='B')
        {
            c++;
            if(i==n-1)
            {
                v.push_back(c);
                c=0;
                d++;

            }
        }
        else if(ch[i]!='B' || i==n-1)
        {
            if(c>0)
            {
                v.push_back(c);
                c=0;
                d++;
            }
        }
    }
    cout<<d<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
