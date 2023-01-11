#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],j,k,c=0,sum=0,c1=0;
    float av=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
            c1++;
           sum=sum+a[i];
           av=(float)sum/c1;
        }
         
    }
   printf("%.2f",av);
}