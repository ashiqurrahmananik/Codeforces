/**the Power Gem of purple color,
the Time Gem of green color,
the Space Gem of blue color,
the Soul Gem of orange color,
the Reality Gem of red color,
the Mind Gem of yellow color.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int>v;
    int n;
    char ch[100],a[100]="purple",b[100]="green",c[100]="blue",d[100]="orange",e[100]="red",f[100]="yellow";
    cin>>n;
    cin.ignore();
    for(int i=1; i<=n; i++)
    {
        cin.getline(ch,100);
        if(strcmp(ch,a)==0)
        {
            v.push_back(1);
        }
        else if(strcmp(ch,b)==0)
        {
            v.push_back(2);
        }
        else if(strcmp(ch,c)==0)
        {
            v.push_back(3);
        }
        else if(strcmp(ch,d)==0)
        {
            v.push_back(4);
        }
        else if(strcmp(ch,e)==0)
        {
            v.push_back(5);
        }
        else if(strcmp(ch,f)==0)
        {
            v.push_back(6);
        }
    }
    sort(v.begin(),v.end());
    int k=v.size();
    //cout<<"d="<<k<<endl;
    cout<<6-n<<endl;
    int flag=0;
    for(int j=1; j<=6; j++)
    {
        flag=0;
        for(int i=0; i<k; i++)
        {
            //cout<<"v[i]="<<v[i]<<" "<<"j="<<j<<endl;
            if(v[i]==j)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(j==1)
            {
                cout<<"Power"<<endl;
            }
            else if(j==2)
            {
                cout<<"Time"<<endl;
            }
            else if(j==3)
            {
                cout<<"Space"<<endl;
            }
            else if(j==4)
            {
                cout<<"Soul"<<endl;
            }
            else if(j==5)
            {
                cout<<"Reality"<<endl;
            }
            else if(j==6)
            {
                cout<<"Mind"<<endl;
            }
        }
    }
    return 0;
}
