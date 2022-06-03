#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rem,sum=0,pro=1;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}