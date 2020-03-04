#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10000],mx=0;
    int a,b,c;
    cin>>a>>b>>c;
    x[1]=a+b*c;
    x[2]=a*(b+c);
    x[3]=a*b*c;
    x[4]=(a+b)*c;
    x[5]=a+b+c;
    for(int i=1;i<=5;i++)
    {
        if(x[i]>mx)
        {
            mx=x[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}
