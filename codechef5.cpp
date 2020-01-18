#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int n,x;
		cin>>n>>x;
		int A[n];
		int sum=0;

		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			sum=sum+A[i];
		}
		/*for(int i=0;i<n;i++)
		{
			sum=sum+A[i];
		}*/
		/*if(sum%x==0)
		{
			cout<<sum/x;
			t=t-1;
			continue;
		}
		else
		{
			int z=0;
			for(int i=0;i<n;i++)
			{
				if(sum%x>=A[i])
				{
					z=1;
					break;
				}
			}
			if(z==1)
			{
				cout<<"-1";
				continue;
			}
			for(int i=0;i<n;i++)
			{
				if(sum%x<A[i])
				{
					cout<<sum/x;
					t=t-1;
					continue;
				}
			}
			
		}*/
		int count=sum/x;
		int count1=0;
		for(int i=0;i<n;i++)
		{
			count1=(sum-A[i])/x;
			if(count==count1)
			{
				count=-1;
				break;
			}
		}
		cout<<count;
		
		
		
	}
}
