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
		int p[n],s[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>s[i];
		}
		int sum=0;
		int hash[8];
		memset(hash, 0, 8*sizeof(hash[0])); 
		for(int i=0;i<n;i++)
		{
			if(p[i]>=1 && p[i]<=8)
			{	if(hash[p[i]-1]<s[i])
					{
					hash[p[i]-1]=s[i];
					}
			}
		}
		for(int i=0;i<8;i++)
		{
			sum=sum+hash[i];
		}
		cout<<sum<<endl;
	}
}
