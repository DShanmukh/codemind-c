#include<stdio.h>
int main()
{
    int N,d,sum=0,square;
    scanf("%d",&N);
    square=N*N;
    while (square!=0)
    {
        d=square%10;
        sum=sum+d;
        square=square/10;
    }
    if (sum==N)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}