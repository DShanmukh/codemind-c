#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(i%2==0)
    {
        sum=sum+arr[i];
    }
    else
    {
        sum1=sum1+arr[i];
    }
    }
   int dif=sum-sum1;
    printf("%d",dif);
}