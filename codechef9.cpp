#include <bits/stdc++.h>  
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		if(n>=4)
		{
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int x,y,z;
		int var=n/4;
		x= arr[n-3*var];
		y= arr[n-2*var];
		z= arr[n-var];
		if(x==arr[(n-1)-3*var] || y==arr[(n-1)-2*var] || z==arr[(n-1)-var])
		{
			cout<<"-1"<<"\n";
		}
		else
		{
		
			cout<<x<<" "<<y<<" "<<z<<"\n";
		}
		}
	}
}
