#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,c=0,a,n;
    char ch[1000];
    cin>>n;
    cin.ignore();
    cin.getline(ch,1000);
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]=='8')
        {
            c++;
        }
    }
    a=n/11;
    if(c>=a)
    {
        cout<<a<<endl;
    }
    else if(c<a)
    {
        cout<<c<<endl;
    }
    return 0;
}
