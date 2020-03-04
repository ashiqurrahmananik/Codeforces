#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,d;
    char ch[1000];
    char x[1000];
    cin.getline(ch,1000);
    cin.getline(x,1000);
    strrev(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==x[i])
        {
            c++;
            d=strlen(ch);
        }
    }
    if(c==d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
