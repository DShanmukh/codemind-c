#include<stdio.h>
int main()
{
    int i,r,k,count=0,j;
    scanf("%d%d%d",&i,&r,&k);
    for( j=i;j<=r;j++)
     scanf("%d",&j);
      for( j=i;j<=r;j++)
     if(j%k==0)
     {
         count++;
     }
     printf("%d",count);
}