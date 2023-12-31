#include<stdio.h>
int main()
{
    int n,oip;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            oip=i;
        }
    }
    printf("%d",oip);
}