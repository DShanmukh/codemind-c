#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,sq,f;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=sqrt(a[i]);
        if(sq*sq==a[i])
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}