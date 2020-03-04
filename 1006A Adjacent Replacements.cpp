#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,arr;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arr;
        if(arr%2==0)
        {
            cout<<arr-1<<" ";
        }
        else
        cout<<arr<<" ";
    }
    cout<<endl;
    return 0;
}
