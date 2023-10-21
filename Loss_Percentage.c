#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float L=X-Y;
    float LP=L/X*100;
    printf("%.2f",LP);
}