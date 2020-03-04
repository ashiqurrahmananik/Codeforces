#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    int n,i;
    char a[20];
    cin>>n;
    n++;
    while(1)
    {
        itoa(n,a,10);
        for(i=0; a[i]!='\0'; i++)
        {
            st.insert(a[i]);
        }

        if(st.size()==4)
        {
            cout<<a<<endl;
            return 0;
        }
        st.clear();
        n++;
    }
    return 0;
}
