#include<stdio.h>
int main()
{
    int Average,Boy1,Boy2;
    scanf("%d%d%d",&Average,&Boy1,&Boy2);
    int Boy3=3*Average-Boy1-Boy2;
    printf("%d",Boy3);
}