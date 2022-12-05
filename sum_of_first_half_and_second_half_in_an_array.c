#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,FH=0,SH=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        FH=FH+a[i];
    }
    printf("%d
",FH);
    for(i=n/2;i<n;i++)
    {
        SH=SH+a[i];
    }
    printf("%d",SH);
}