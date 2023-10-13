#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);
    int N=A+B*2;
    if(N >= X)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}