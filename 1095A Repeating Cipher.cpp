#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=-1,l=-1,k=0;
    char ch[1000];
    cin>>n;
    cin.ignore();
    cin.getline(ch,1000);
    for(int i=1;; i++)
    {
        c++;
        l++;
        if(c==k)
        {
            if(l==n)
            {
                break;
            }
            k++;
            cout<<ch[l];
            c=0;

        }
    }
    cout<<endl;
    return 0;
}
