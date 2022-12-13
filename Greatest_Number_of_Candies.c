#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k[n],d,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k[i]=a[i];
    }
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            a[i+1]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(k[i]+d>=a[i])
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}