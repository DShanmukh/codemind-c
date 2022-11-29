#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,j,count=0;
        scanf("%d",&a);
        for(j=1;j<a;j++)
        {
            if(a==j*j)
            {
                count=1;
            }
        }
        if(count==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}