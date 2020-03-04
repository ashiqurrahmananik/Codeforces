#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0,e=0,p,f=0,c=0;
    char ch[1020],ch1[1020];
    cin.getline(ch,1020);
    cin.getline(ch1,1020);
    d=strlen(ch);
    e=strlen(ch1);
    if(d!=e)
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
        {

            ch[i]=1;
        }
        else
        {
            ch[i]=0;
        }
    }
    for(int i=0; ch1[i]!='\0'; i++)
    {
        if(ch1[i]=='a' || ch1[i]=='e' || ch1[i]=='i'|| ch1[i]=='o'|| ch1[i]=='u')
        {
            ch1[i]=1;

        }
        else
        {
            ch1[i]=0;
        }
    }
    for(int i=0; i<=d; i++)
    {
        if(ch[i]==1 && ch1[i]==1)
        {
            p=0;
        }
        if(ch[i]==1 && ch1[i]==0)
        {

            p=1;
            break;

        }
        if(ch[i]==0 && ch1[i]==1)
        {

            p=1;
            break;

        }

    }
    if(p==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;

}
