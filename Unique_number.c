#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,temp,i,c=0,f=0;
    for(i=0;i<=9;i++)
    {
        temp=n;
        f=0;
        while(temp!=0)
        {
            r=temp%10;
            if(i==r)
            {
                f++;
            }
            temp/=10;
        }
        if(f>1)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}