#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=-1,k=0;
    vector<char>v;
    char x[1000];
    cin.getline(x,1000);
    b=strlen(x);
    for(int i=0; i<b; i++)
    {
        c++;
        if(c==k)
        {
            k+=2;
            //const char *s=x[i];
            //int n=atoi(x[i]);
            v.push_back(x[i]);
        }
    }
    sort(v.begin(),v.end());
    a=v.size();
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(a>0)
        {
            if(i!=a-1)
            {
                cout<<"+";
            }
        }
    }
    cout<<endl;
    return 0;
}
