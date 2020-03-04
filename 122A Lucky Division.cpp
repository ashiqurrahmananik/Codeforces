#include<stdio.h>
int main()
{
    int n,k=0,num,r=0;
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        //printf("%d\n",r);
        if(r!=4 && r!=7)
        {
            if(num%4==0 || num%7==0 || num%47==0 || num%74==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("YES\n");
    }
    return 0;
}


