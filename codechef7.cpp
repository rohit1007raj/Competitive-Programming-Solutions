#include<iostream>
using namespace std;
string checksubstring(string s1,string s2)
{
	int l1= s1.length();
	int l2=s2.length();
	
	for(int i=0;i<=l2-l1;i++)
	{
		int j;
		for(j=0;j<l1;j++)
		{
			if(s2[i+j]!=s1[j])
			{
				break;
			}
		}
		if(j==l1)
		{
			return("Good");
		}
		
	}
	return("Bad");
}
int main()
{	int t;
	cin>>t;
	while(t--)
	{
	string s1="101";
	string s2="010";
	string s3;
	getline(cin,s3);
	if(s3.length()==0)
	{
		getline(cin,s3);
	}

	string f=checksubstring(s1,s3);
	string h=checksubstring(s2,s3);
	if(f=="Good" || h=="Good")
	{
		cout<<"Good"<<"\n";
	}
	else
	{
		cout<<"Bad"<<"\n";
	}
	}
	return(0);
	
}
