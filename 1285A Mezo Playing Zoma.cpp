#include<bits/stdc++.h>
using namespace std;
#define m 1000000
char ch[m];
int main()
{
    int n,c=0,d=0;
    cin>>n;
    cin.ignore();
    cin.getline(ch,m);
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='L')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    cout<<c+d+1<<endl;
    return 0;

}
