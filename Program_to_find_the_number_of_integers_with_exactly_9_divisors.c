#include<stdio.h>
int main()
{
    int n,t=0,c=1,i,j;
    scanf("%d" ,&n);
    for(i=1;i<=n;i++)
    {
        c=1;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            c++;
            }
            if(c==9)
            {
                printf("%d " ,i);
                t++;
                }
                }
                printf("
Total=%d" ,t);
    
}