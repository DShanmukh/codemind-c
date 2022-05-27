#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int count1=0,count2=0;
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      if(a[i]%2==0)
       count1++;
       else
        count2++;
        printf("%d %d",count1,count2);
}