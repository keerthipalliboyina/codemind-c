#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int H,M,S;
    H=n/3600;
    M=(n%3600)/60;
    S=n%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}