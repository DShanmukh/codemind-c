#include<stdio.h>
int main()
{
    int n,m,even=0,odd=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(m%2==0)
        even++;
        else
        odd++;
        n=n/10;
    }
    if(odd==0)
    printf("Even");
    else if (even==0)
    printf("Odd");
    else
    printf("Mixed");
    return 0;
}