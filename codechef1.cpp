#include<stdio.h>
#include<iostream>
#include<string>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
	int n,q,value,i,j;
	string d;
	cin>>n;
	int arr[n][n];
	cin>>q;
	int f[10];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	getline( cin, d, ' ' );
	cin >> value;
	//cin.ignore(numeric_limits<streamsize>::max(), '\n' );
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i][0]!=0)
				{
					f[0]=i;		//storing row
					break;
				}
	}
	for(j=0;j<n;j++)
	{
		if(arr[0][j]!=0)
		{
			f[1]=j;			//stpring column
			break;			
		}
		
	}
	if(d=="up")
	{
		int exit_val=arr[f[0]][f[1]];
		//cout<<exit_val<<"\n";
		for(i=0;i<n-1;j++)
		{
			arr[i][f[1]]=arr[i+1][f[1]];
		}
		arr[n-1][f[1]]=value;
}

		
		
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	//if(d=="down")
	
	
}
