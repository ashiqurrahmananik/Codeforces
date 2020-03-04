#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string name;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>name;
        if(name=="Tetrahedron")
        {
            c+=4;
        }
        else if(name=="Cube")
        {
            c+=6;
        }
        else if(name=="Octahedron")
        {
            c+=8;

        }
        else if(name=="Dodecahedron")
        {
            c+=12;
        }
        else if(name=="Icosahedron")
        {
            c+=20;
        }

    }
    cout<<c<<endl;
    return 0;

}