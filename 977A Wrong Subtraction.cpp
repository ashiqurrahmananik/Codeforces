#include<stdio.h>
int main()
{
    int n,x,i,last;
    scanf("%d %d",&n,&x);
    for(i=1;i<=x;i++)
    {
        last=n%10;

        if(last!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }
    }
    printf("%d\n",n);
    return 0;
}
