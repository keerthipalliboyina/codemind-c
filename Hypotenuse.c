#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2;
    scanf("%d%d",&s1,&s2);
    float h=sqrt((s1*s1)+(s2*s2));
    printf("%.2f",h);
}