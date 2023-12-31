#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,flag;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        flag=0;
      if(a[i]==se)
      {
          flag=1;
          break;
      }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}   
