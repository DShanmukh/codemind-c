#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    float Area,Peri;
    Area=3.14*r*r;
    Peri=2*3.14*r;
    printf("%.2f
%.2f",Area,Peri);
}