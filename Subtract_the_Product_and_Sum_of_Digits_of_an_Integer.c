#include<stdio.h>
int main()
{
    int num, rem, prod = 1,sum=0,subtract;
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10; 
        prod *= rem; 
        sum+=rem;
        num /=  10;  
    }
      subtract=prod-sum;
    printf("%d",subtract);
    return 0;
}