#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int l= str.size();
		int arr[26];
		for(int i=0;i<26;i++)
		{
			arr[i]=0;
		}
		for(int i=0;i<l;i++)
		{	int index = int(str[i])-97;	
			if(arr[index]==0)
			{
				cout<<str[i];
				arr[index]=1;
			}
		}
		cout<<endl;
	}
}
