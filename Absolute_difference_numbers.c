#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,temp;
    scanf("%d %d",&n,&m);
    temp=n;
    int g,r,r1,r2,r3,rev1=0,rev=0,rev2=0;
    g=pow(10,m);
        r=n%g;
    while(temp!=0)
    {
        r1=temp%10;
        rev=rev*10+r1;
        temp/=10;
    }
    r2=rev%g;
    while(r2!=0)
    {
        r3=r2%10;
        rev2=rev2*10+r3;
        r2/=10;
    }
    int sum;
    sum=abs(rev2-r);
    printf("%d",sum);
}