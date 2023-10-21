#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float P=Y-X;
    float PP=(P*100)/X;
    printf("%.2f",PP);
    
}