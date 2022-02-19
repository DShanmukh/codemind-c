#include<stdio.h>
int main()
{
    int num,i,fac,sum=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
    	 if(num%i==0)
        {
        	i++;
        }
        for(i=1;i<num;i++)
       
        if(num%i==0)
        {
        	sum+=i;
		}
    }
    if(sum>num)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}