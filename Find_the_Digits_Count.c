#include<stdio.h>
int main()
{
    int n,dc=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        dc=dc+1;
    }
    printf("%d",dc);
}