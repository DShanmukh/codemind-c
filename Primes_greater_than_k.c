#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],j,k,c=0,c1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        k=a[i];
        c=0;
        if(k==1)
        {
            c=1;
        }
        for(j=2;j<k;j++)
        {
            if(k%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            if(a[i]>=x)
            {
               c1++;
            }
            
        }
    }
    printf("%d",c1);
    
}