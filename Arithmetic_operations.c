#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int S,D,P,Q,R;
    S=a+b;
    D=a-b;
    P=a*b;
    Q=a/b;
    R=a%b;
    printf("Sum:%d
",S);
     printf("Difference:%d
",D);
      printf("Product:%d
",P);
       printf("Quotient:%d
",Q);
        printf("Remainder:%d",R);
}