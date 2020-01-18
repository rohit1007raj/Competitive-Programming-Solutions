#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		if(n==1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		int count=0,count1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(A[i]>A[j])
				{
					count=count+1;
				}
			}
			
		}
		for(int i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1])
			{
				count1=count1+1;
			}
		}
		
		if(count==count1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		else
		{
			cout<<"NO"<<endl;
			continue;
		}
	}
}
