#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];	
		}
		int count=0,count1=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				count=count+1;
			}
			if(arr[i]==2)
			{
				count1=count1+1;
			}
			
		}
		int f= count*(count-1);
		int k= count1*(count1-1);
		int q=f;
		if(f%2==0)
		{
			q=f/2;
		}
		int z=k;
		if(k%2==0)
		{
			z=k/2;
		}
		cout<<q+z<<endl;
		
	}
}
