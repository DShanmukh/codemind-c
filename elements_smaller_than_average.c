#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,av=0,count=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        av=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<av || a[i]==av)
        {
            count++;
        }
    }
    printf("%d",count);
}