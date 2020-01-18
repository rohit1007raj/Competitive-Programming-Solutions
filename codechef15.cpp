#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	string str;
		int size;
		cin>>size;
		cin>>str;
		int count=0;
		for(int i=0;i<size;i++)
		{
			if(str[i]=='1')
			{
				count=count+1;
			}
			
		}
		cout<<((count)*(count+1))/2<<endl;
	}
}
