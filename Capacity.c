#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    float c;
    c=2*s*t*b*512;
    float tc;
    tc=c/1024;
    printf("%.0f KB",tc);
}