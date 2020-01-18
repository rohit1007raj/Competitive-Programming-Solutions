#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		sum=sum+c[i];
	}
	int k;
	k= (n)*(n+1)/2;
	if(k==sum)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
}
