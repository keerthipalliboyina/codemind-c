#include<stdio.h>
int main()
{
    int e,m,p,c,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cs);
    if(e<=34 || m<=34 || p<=34 || c<=34 || c<=34)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}