#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d %d %d",&s,&t,&b);
    int k;
    k=(2*s*t*b*512)/1024;
    printf("%dkb",k);
}