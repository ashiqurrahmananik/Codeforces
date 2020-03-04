#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    char ch[150];
    cin.getline(ch,150);
    d=strlen(ch);
    for(int i=0;i<d;i++)
    {
        if(ch[i]=='H')
        {
            cout<<"YES"<<endl;
           return 0;
        }
        if(ch[i]=='Q')
        {
             cout<<"YES"<<endl;
             return 0;
        }
        if(ch[i]=='9')
        {
             cout<<"YES"<<endl;
             return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
