#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
     }
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         if(k==a[i])
         {
             printf("True");
             break;
         }
     }
     if(k!=a[i])
     {
         printf("False");
     }
}