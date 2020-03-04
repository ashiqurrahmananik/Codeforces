#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,c=0,n;
    char ch[1000];
    cin.getline(ch,1000);
    d=strlen(ch);
    for(int i=0;i<1;i++)
    {
        if(ch[0]>=97 && ch[0]<=122)
        {
            n=ch[0]-32;
            printf("%c",n);
            break;
        }
        else
        {
            cout<<ch[0];
            break;
        }
    }
    for(int i=1;i<d;i++)
    {
        cout<<ch[i];
    }
    cout<<endl;
    return 0;
}
