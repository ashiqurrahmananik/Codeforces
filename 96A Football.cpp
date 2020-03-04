#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1,i,k=0;
    string s;
    cin >> s;
    for (i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;

            if (c== 7)
            {
                cout << "YES" << endl;
                k=1;
                break;
            }
        }
        else if(s[i] != s[i - 1])
            c=1;
    }
    if(k==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
