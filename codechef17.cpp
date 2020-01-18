#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[i];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int count=0,count1=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2=0)
		{
			count=count+1;
		}
		else
		{
			count1=count+1;
		}
	}
	if(count==count1 || count-count1=1)
	{
		cout<<"DL";
	}
	else
	{
		cout<<"DETAIN";
	}
}
