#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a;
        int f=1,c,j;
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
        c=a-j;
        f=f*c;
        }
      printf("%d
",f);
        
    }
}