#include<stdio.h>
int main ()
{
    int a,b,i,max;
    scanf("%d%d",&a,&b);
    max=(a>b) ? a:b;
    for(i=max;i<=a*b;i++)
    if(i%a==0 && i%b==0)
    {
        break;
    }
    printf("%d",i);
    return 0;
    
}