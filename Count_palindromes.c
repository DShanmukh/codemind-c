#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,r,rev=0,k,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        rev=0;
        while(k!=0)
        {
            r=k%10;
            rev=rev*10+r;
            k=k/10;
        }
        if(rev==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}