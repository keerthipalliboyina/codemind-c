#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int Sum=x+y;
    int Difference=x-y;
    int Product=x*y;
    int Quotient=x/y;
    int Remainder=x%y;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d
",Remainder);
}