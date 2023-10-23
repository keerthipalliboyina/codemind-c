#include<stdio.h>
int main()
{
    float salary,HRA,DA;
    scanf("%f%f%f",&salary,&HRA,&DA);
    float pf=0.12*salary;
    float gs=(salary+HRA+DA+pf);
    printf("%.2f
",pf);
    printf("%.2f",gs);
}