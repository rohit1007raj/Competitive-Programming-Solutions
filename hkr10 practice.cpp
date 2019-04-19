#include<stdio.h>
int main()
{
	int n,t,a[100],t1,t2,x[100],minimum,y[100],i,j;
	
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<t;i++)
	{
		scanf("%d ",&t1,&t2);
		for(j=a[t1];j<=a[t2];i++)
		{
			x[j]=a[j];
		}
		minimum=x[0];
		for(j=1;j<100;j++)
		{
			if(x[j]<minimum)
			{
				minimum=x[j];
			}
		}
		y[i]=minimum;
	}
	for(i=0;i<100;i++)
	{
		printf("%d",y[i]);
		printf("\n");
	}
	return 0;
	
}
