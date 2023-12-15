#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int odd[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&odd[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+odd[i];
        }
    }
    printf("%d",sum);
}