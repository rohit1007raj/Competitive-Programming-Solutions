#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>c[i];
		}
		int temp;
		int flag=0;
		temp=x-y;
		cout<<"temp="<<temp<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<p[i]<<endl;
		}
		for(int i=0;i<n;i++)
		{
			if(temp<=p[i])
			{
				if(c[i]<=k)
				{
					cout<<"LuckyChef"<<endl;
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		{
			continue;
		}
		else
		{
			cout<<"UnluckyChef"<<endl;
		}
	}	
}
