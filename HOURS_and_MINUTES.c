#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h=a/60;
    int m=a%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}