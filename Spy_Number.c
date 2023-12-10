#include<stdio.h>
int main()
{
    int n,r,s,k=0,b=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        b=r*b;
        k=k+r;
        n=n/10;
    }
    if(b==k)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
    