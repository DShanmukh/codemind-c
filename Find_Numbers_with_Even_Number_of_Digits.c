#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r,count1=0,tem;
    for(i=0;i<n;i++)
    {
        tem=a[i];
        count=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
               count++;
            a[i]=a[i]/10;
        }
        if(tem==0)
        {
            count+=1;
        }
        if(count%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}