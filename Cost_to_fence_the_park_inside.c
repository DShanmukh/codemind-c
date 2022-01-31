#include<stdio.h>
int main()
{
    int L,B,W,C,l,b,Area1,Area2,Area3,Amount;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    Area1=L*B;
    l=L-2*W;
    b=B-2*W;
    Area2=l*b;
    Area3=Area1-Area2;
    Amount=Area3*C;
    if(l<=0 ||b<=0)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",Amount);
    }
}