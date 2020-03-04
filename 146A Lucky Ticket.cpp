#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g=0,d=0,h,c=0,e=0,l=0,p=0,m=0;
    char ch[1000],k[1000],f[1000];
    cin>>n;
    cin.ignore();
    cin.getline(ch,1000);
    for(int i=0;i<n;i++)
    {
        //cout<<ch[i]<<endl;
        if(ch[i]!='4' && ch[i]!='7')
        {
           cout<<"NO"<<endl;
            return 0;
        }
    }
    strcpy(k,ch);
    //strcpy(f,ch);
    //strrev(k);
    d=n/2;
    h=d;
    for(int i=0; i<d; i++)
    {

        if(ch[i]=='4')
        {
            c++;
        }
        if(ch[i]=='7')
        {
            e++;
        }
        if(k[h]=='4')
        {
            l++;
        }
        if(k[h]=='7')
        {
            p++;
        }
        h++;

    }
    //cout<<c<<" "<<e<<endl;
    /*if(c==0 && e==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }*/
    if(c==l && e==0 && p==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(c==0 && l==0 &&  e==p)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(c==l && e==p)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
