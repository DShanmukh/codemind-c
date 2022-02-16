#include <stdio.h>
int main() {
  int n, reversed = 0,re, n1;
    scanf("%d", &n);
    n1 = n;
    while (n != 0) 
    {
        re = n % 10;
        reversed = reversed * 10 + re;
        n /= 10;
    }
    if (n1== reversed)
        printf("True");
    else
        printf("False");

    return 0;
}