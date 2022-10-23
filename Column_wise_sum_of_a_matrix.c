#include<stdio.h>
int main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int i,j,a[rs][cs],sum=0;
	for(i=0;i<rs;i++)
	{
	    for(j=0;j<cs;j++)
	    {
           scanf("%d",&a[i][j]);
	    }
    }
    for(j=0;j<cs;j++)
    {
        sum=0;
    	for(i=0;i<rs;i++)
    	{
    		sum=sum+a[i][j];
		}
		printf("%d ",sum);
	}
	
	
	 return 0;
}