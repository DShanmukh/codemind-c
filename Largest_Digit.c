#include<stdio.h>
int main()
{
    int i,n,large=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(large<rem)
        {
            large=rem;
        }
    n/=10;
    }
    printf("%d",large);
}