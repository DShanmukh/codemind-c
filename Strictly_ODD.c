#include<stdio.h>
int main ()
{
    int i,c=0,c1=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && i%2!=0)
        {
            c1++;
        }
    }
    if(c==c1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}