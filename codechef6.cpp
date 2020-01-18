#include<iostream>
#include<string>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{
	string str1,str2;
		
	getline(cin,str1);
	 if(str1.length()==0 )
		{ 
            getline(cin, str1);
    	}
	getline(cin,str2);
	char ch1,ch2;
	int l1= str2.length();
	int l2= str1.length();

	
	int count=0;
	for(int i=0;i<l1;i++)
	{	ch1=str2.at(i);
		for(int j=0;j<l2;j++)
		{
			ch2=str1.at(j);
			if(ch1==ch2)
			{
				count=count+1;
				break;
			}
		}
		
	}
	cout<<count<<"\n";
	}
}
