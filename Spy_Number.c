#include<stdio.h>
int main()
{
    int n,r,product=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
    if(sum==product)
        printf("Spy Number");
    else
    printf("Not Spy Number");
	return 0;
}