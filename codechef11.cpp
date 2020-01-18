#include<bits/stdc++.h>
#include<iostream>
using namespace std;
double distance(int x1, int y1, int x2, int y2) 
{ 
    // Calculating distance 
    return sqrt(pow(x2 - x1, 2) +  
                pow(y2 - y1, 2) * 1.0); 
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int n,m,k,v1,v2,v3;
		cin>>v1>>v2>>v3;
		n=2*v1;
		m=2*v2;
		k=2*v3;
		int N[n],M[m],K[k];
		for(int i=0;i<n;i++)
		{
			cin>>N[i];
		} 
		for(int i=0;i<m;i++)
		{
			cin>>M[i];
		}
		for(int i=0;i<k;i++) 
		{
			cin>>K[i];
		}
		double dN[v1],dM[v2],dK[v3];
		int j=0;	
		for(int i=0;i<n;i=i+2)
		{	
			dN[j]=distance(x,y,N[i],N[i+1]);
			j=j+1;
		}
		for(int i=0;i<j;i++)
		{
			cout<<dN[i]<<endl;
		}
	
	}
}
