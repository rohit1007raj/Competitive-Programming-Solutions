#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if(y1==y2 || y2==y3 || y1==y3)
		{
			if(x1==x2 || x2==x3 || x1==x3)
			{
				count=count+1;
			}
		}
	}
	cout<<count;
}
