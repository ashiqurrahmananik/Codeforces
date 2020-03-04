#include<bits/stdc++.h>
using namespace std;
int main()
{
    set< int > s;
    int d,c=0,n;
    char ch[1000];
    cin.getline(ch,1000);
    d=strlen(ch);
    for(int i=0;i<d;i++)
    {
        s.insert(ch[i]);
    }
    d=s.size();
    if(d%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;

}
