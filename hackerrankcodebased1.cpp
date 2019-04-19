#include<stdio.h>
int main()
{
    int n,mainarr[100],i;
    float count1=0.0,count2=0.0,count3=0.0;
    float x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&mainarr[i]);
        if(mainarr[i]>0)
        {
        	count1=count1+1;
		}
		if(mainarr[i]==0)
		{
			count2=count2+1;
		}
		if(mainarr[i]<0)
		{
			count3=count3+1;
		}
    }
    y=float(n);
    printf("%0.6f\n",count1/n);
    printf("%0.6f",count3/n);
    printf("%0.6f\n",count2/n);
    
    

}
