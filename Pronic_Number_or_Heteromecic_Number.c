#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0,d;
    for(i=1;i<=n;i++)
    {
      d=i+1;
      if((n/i)==d)
      {
          c++;
      }
     
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}