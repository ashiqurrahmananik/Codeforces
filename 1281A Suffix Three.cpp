#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10000];
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        cin.getline(ch,10000);
        int d=strlen(ch);
        if(ch[d-1]=='o')
        {
            cout<<"FILIPINO"<<endl;
        }
        if(ch[d-1]=='u')
        {
            cout<<"JAPANESE"<<endl;
        }
        if(ch[d-1]=='a')
        {
            cout<<"KOREAN"<<endl;
        }
    }

}
