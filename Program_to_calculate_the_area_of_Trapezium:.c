#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d %d %d",&a,&b,&h);
    float Area;
    Area=((a+b)*h);
    printf("%.4f",Area/2);
}