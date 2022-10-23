#include<stdio.h>
int main()
{
	int rs,cs,max=0;
	scanf("%d%d",&rs,&cs);
	int i,j,a[rs][cs],sum=0;
	for(i=0;i<rs;i++)
	{
	    for(j=0;j<cs;j++)
	    {
           scanf("%d",&a[i][j]);
	    }
    }
    for(i=0;i<rs;i++)
    {
        sum=0;
    	for(j=0;j<cs;j++)
    	{
    		sum=sum+a[i][j];
		}
		if(sum>max)
		{
		    max=sum;
		}
	}
	printf("%d",max);
	
	 return 0;
}