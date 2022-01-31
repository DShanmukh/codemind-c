#include<stdio.h>
int main()
{
    int a,b;
    float sum,average;
    scanf("%d%d",&a,&b);
    sum=a+b;
    average=sum/2;
    printf("%.4f",average);
    return 0;
}