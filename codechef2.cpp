#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{	int speed[10000];
		int cars;
		cin>>cars;
		int count=1;
		
		for(int i=0;i<cars;i++)
		{
			cin>>speed[i];
		}
		if(cars==1)
		{
			cout<<"1"<<"\n";
		}
		else
		{
		for(int i=1;i<cars;i++)
		{
			if(speed[i]<=speed[i-1])
			{
				count=count+1;
			}
			else if(a[j]>a[j-1])
                a[j]=a[j-1];
		}
		cout<<count<<"\n";
	}
		t=t-1;
		
		
	}
}
