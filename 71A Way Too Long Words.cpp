#include<stdio.h>
#include<string.h>
int main()
{
    int d,n,i;
    char ch[101];
    scanf("%d",&n);
    gets(ch);
    for(i=1; i<=n; i++)
    {
        gets(ch);
        d=strlen(ch);
        if(d>10)
        {
            printf("%c",ch[0]);
            printf("%d",d-2);
            printf("%c\n",ch[d-1]);
        }
        else
        {
            puts(ch);
        }
    }
    return 0;
}
