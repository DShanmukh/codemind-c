#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
     for(i=0;i<n;i++)
    {
    if(arr[i]==d)
    {
       count++;
    }
    }
    printf("%d",count);
    
}