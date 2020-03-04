#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,e,t,p=0;
    char ch[1000];
    cin.getline(ch,1000);
    d=strlen(ch);
    e=d/2;
    t=d/2;
    if(d%2==1)
    {
        //cout<<ch[e];
        for(int i=1; i<=d/2+1; i++)
        {
            e++;
            cout<<ch[t];
            if(i!=d/2+1)
            {
                cout<<ch[e];
            }
            t--;
        }
    }
    else
    {
        for(int i=1; i<=d/2; i++)
        {
            t--;
            cout<<ch[t];
            cout<<ch[e];
            e++;
            p=1;
        }
    }
    cout<<endl;
    return 0;
}
