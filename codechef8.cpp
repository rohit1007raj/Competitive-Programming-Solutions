#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		int sum=0;
		cin>>n>>k;
		int wt[n];
		int sum2=0;
		for(int i=0;i<n;i++)
		{
			cin>>wt[i];
			sum2=sum2+wt[i];
		}
		k=min(k,n-k);
		sort(wt,wt+n);
		int sum1=0;
		for(int i=0;i<k;i++)
		{
			sum1=sum1+wt[i];
		}
		
		cout<<((sum2-sum1)-sum1)<<"\n";
		/*if(sum2-sum1<0)
		{
			int f=sum1-sum2;
			cout<<f-sum1<<"\n";
		}
		else
		{
			int g=sum2-sum1;
			cout<<g-sum1<<"\n";
		}*/
		
	}
}
