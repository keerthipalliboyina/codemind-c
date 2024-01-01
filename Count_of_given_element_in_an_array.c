#include<stdio.h>
int main()
{
    int n,a,z,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        a=arr[i];
        if(z==a)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}