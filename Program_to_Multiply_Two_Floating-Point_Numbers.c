#include<stdio.h>
float pro(float N1,float N2)
{
    float N3=N1*N2;
    return N3;
}
int main ()
{
    float x,y;
    scanf("%f%f",&x,&y);
    float sum = pro(x,y);
    	printf("%.2f",sum);
}