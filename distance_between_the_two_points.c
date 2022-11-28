#include<stdio.h>
#include<math.h>
int main()
{
    float X1,X2,Y1,Y2;
    scanf("%f %f %f %f",&X1,&Y1,&X2,&Y2);
    int a,b;
    a=(X2-X1);
    float f;
    f=pow(a,2);
    b=(Y2-Y1);
    float g;
    g=pow(b,2);
    float M;
    M=g+f;
    printf("%.4f",sqrt(M));
    
}