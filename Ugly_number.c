#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j,k,f=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
         for(j=0;j<a;j++)
         {
              for(k=0;k<a;k++)
              {
                 if(a==(pow(2,i))*(pow(3,j))*(pow(5,k)))
                 {
                     f=1;
                 }
              }
         }
    }
    if(f==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}