///4744000695826
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,r=0,c=0,c1=0,reverse=0,num;
    cin>>num;
    while(num > 0)
    {
        r=(num % 10);
        reverse = (reverse * 10)+r;
        num /= 10;
        if(r==7 || r==4)
        {
            c1++;
            //cout<<c1<<endl;
        }
    }

    //cout<<reverse<<endl;
    if(c1==7 || c1==4 || c1==47 || c1==744)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
