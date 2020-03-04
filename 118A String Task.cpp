#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    char ch[1000];
    cin.getline(ch,1000);
    d=strlen(ch);
    for(int i=0;i<d;i++)
    {
        if(ch[i]!='a' && ch[i]!='y'&& ch[i]!='e' && ch[i]!='i' &&ch[i]!='o' && ch[i]!='u' &&ch[i]!='A' && ch[i]!='E' && ch[i]!='I' && ch[i]!='Y' &&ch[i]!='O' && ch[i]!='U')
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                ch[i]=ch[i]+32;
            }
            cout<<"."<<ch[i];
        }
    }
    cout<<endl;
    return 0;

}
