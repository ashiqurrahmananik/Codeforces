#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,c=0,s;
    char ch[1000];
    cin.getline(ch,1000);
    d=strlen(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a')
        {
            c++;
        }
    }
    s=d-c;
    if(s>=c)
    {
        cout<<c+c-1<<endl;
    }
    else
    {
        cout<<d<<endl;
    }
    return 0;
}
