#include<stdio.h>
int main()
{
    int n,lon;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            lon=a[i];
        }
    }
    printf("%d",lon);
}