#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=y*30;
    if(x>=res)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}