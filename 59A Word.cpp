#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,p=0,d;
    char ch[101];
    cin.getline(ch,101);
    d=strlen(ch);
    for(int i=0; i<d; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            c++;
        }
        else
        {
            p++;
        }

    }
    //cout<<c<<endl;
    //cout<<p<<endl;
    if(c>p)
    {
        strupr(ch);
        cout<<ch<<endl;
    }
    else if(p>c)
    {
        strlwr(ch);
        cout<<ch<<endl;
    }
    else if(c==p)
    {
        strlwr(ch);
        cout<<ch<<endl;
    }
    return 0;
}
