#include<stdio.h>
int main()
{
    float x,b1,b2,b3;
    scanf("%f%f%f%f",&x,&b1,&b2,&b3);
    b3=3*x-b1-b2;
    printf("%2.0f",b3);
}