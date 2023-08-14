#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,k,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
           c+=1;
        }
        else{
            c+=2;
        }
    }
    printf("%d",c);
}