#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&even[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(even[i]%2==0)
        {
            sum=sum+even[i];
        }
    }
    printf("%d",sum);
}