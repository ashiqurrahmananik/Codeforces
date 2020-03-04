#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x=="X++")
        {
            c++;

        }
        else if(x=="++X")
        {
            c++;

        }
        else if(x=="X--")
        {
            c--;

        }
        else if(x=="--X")
        {
            c--;
        }
    }
    cout<<c<<endl;
    return 0;

}
