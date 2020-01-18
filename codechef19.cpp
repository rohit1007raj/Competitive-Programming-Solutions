#include<iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int f1,f2;
		cin>>f1>>f2;
		if(f1>0 && f2>0 && f1<f2)
		{
			cout<<f2-f1<<endl;
			continue;
		}
		if(f1>0 && f2>0 && f1>f2)
		{
			cout<<f1-f2<<endl;
			continue;
		}
		if(f1<0 && f2<0 && f1<f2)
		{
			cout<<abs(f1)-abs(f2)<<endl;
		}
		if(f1<0 && f2<0 && f1>f2)
		{
			cout<<abs(f2)-abs(f1)<<endl;
		}
		if(f1>0 && f2<0)
		{
			cout<<abs(f1)+abs(f2)<<endl;
		}
	}
}
