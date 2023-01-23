#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    float p;
    p=(z-y)/x;
    printf("%.0f",p);
}