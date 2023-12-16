#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int odd[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&odd[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
           sum=sum+odd[i];
        }
    }
    printf("%d",sum);
}