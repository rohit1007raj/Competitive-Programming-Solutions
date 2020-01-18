#include<iostream>
using namespace std;
int main()
{
	int test,number,times;
	cin>>test;
	while(test!=0)
	{
		cin>>number>>times;
		int f;
		for(int i=1;i<=times;i++)
		{	number=number+1;
			if(number%10==0)
			{
				number=number-10;
			}
			f=f+1;
			if(f==times)
			{
				break;
			}
		}
		cout<<number<<endl;
		test=test-1;
	}
	return(0);
}
