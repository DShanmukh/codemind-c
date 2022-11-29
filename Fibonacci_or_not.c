#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a=0,b=1,c,sum=0,count=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        sum=sum+a;
        if(sum==n)
        {
            count++;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(count==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}