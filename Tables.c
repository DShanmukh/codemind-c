#include<stdio.h>
int main()
{
    int n,m,i,pro=1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            pro=n*i;
            printf("%d x %d = %d
",n,i,pro);
        }
    }
      
}