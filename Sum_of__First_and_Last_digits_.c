#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int lastdigit=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    int firstdigit=n;
    sum=firstdigit+lastdigit;
    printf("%d",sum);
}