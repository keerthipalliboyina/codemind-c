#include<stdio.h>
int main()
{
    int a,b,i,m,n,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        n=m%b;
        if(n==0)
        {
           gcd=(a*b)/m;
           printf("%d",gcd);
           break;
        }
    }
}