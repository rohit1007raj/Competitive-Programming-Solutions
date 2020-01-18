#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int f=0;
		int counter=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]+f-k>=0)
			{
				f=f+a[i]-k;
				counter=counter+1;
				if(counter==n)
				{
					cout<<"YES"<<endl;
					break;
				}
				continue;
			}
			if(a[i]+f-k<0)
			{
				cout<<"NO "<<i+1<<endl;
				break;
			}
		
			
		}
	}
}
