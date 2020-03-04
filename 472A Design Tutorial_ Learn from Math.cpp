#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    for(int i=4; i<=n; i++)
    {
        if(i%2==0)
        {
            c=n-i;
            if(c>=10)
            {
                if(c%2==0 || c%3==0 ||c%5==0 || c%7==0)
                {
                    cout<<i<<" "<<c<<endl;
                    break;
                }
            }
            if(c%2==0 || c%3==0)
            {
                cout<<i<<" "<<c<<endl;
                break;
            }
        }
    }
    return 0;
}
