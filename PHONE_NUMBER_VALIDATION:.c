#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char p[15];
    scanf("%s",p);
    n=strlen(p);
    if(n==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}