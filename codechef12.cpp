#include<bits/stdc++.h>
#include<iostream>
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 
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
		int var1=v1*v2;
		int var2=v2*v3;
		double dN[v1],dM[var1],dK[var2];
		int index=0;	
		for(int i=0;i<n;i=i+2)						//from (x,y) to N
		{	
			dN[index]=distance(x,y,N[i],N[i+1]);
			index=index+1;
		}
		int index_1=0;
		for(int i=0;i<n;i=i+2)				//from (N) to (M)
		{
			for(int j=0;j<m;j=j+2)
			{
				dM[index_1]=distance(N[i],N[i+1],M[j],M[j+1]);
				index_1=index_1+1;
			}
		}
		int index_2=0;	
		for(int i=0;i<m;i=i+2)			//from(M) to (K)
		{
			for(int j=0;j<k;j=j+2)
			{
				dK[index_2]=distance(M[i],M[i+1],K[j],K[j+1]);
				index_2=index_2+1;
			}
		}
		double min=dN[0]+dM[0];
		
		int counter=0;
		int final_counter2=0;
		for(int i=0;i<index;i++)			//calcuating distance from(x,y) to arr2 (minimum)
		{
			for(int j=0;j<v2;j++)
			{
					if(dN[i]+dM[counter]<min)
					{
						min=dN[i]+dM[counter];
						final_counter2=counter;
					}
					counter=counter+1;
			}
		}
		double distanceN[v1],distanceM[var1],distanceK[var2];
		int ind=0;	
		for(int i=0;i<m;i=i+2)						//from (x,y) to M
		{	
			distanceM[ind]=distance(x,y,M[i],M[i+1]);
			ind=ind+1;
		}
		int ind_1=0;
		for(int i=0;i<m;i=i+2)				//from (M) to (N)
		{
			for(int j=0;j<n;j=j+2)
			{
				distanceN[ind_1]=distance(M[i],M[i+1],N[j],N[j+1]);
				ind_1=ind_1+1;
			}
		}
		int ind_2=0;	
		for(int i=0;i<n;i=i+2)			//from(N) to (K)
		{
			for(int j=0;j<k;j=j+2)
			{
				distanceK[ind_2]=distance(N[i],N[i+1],K[j],K[j+1]);
				ind_2=ind_2+1;
			}
		}
		double min_1=distanceN[0]+distanceM[0];
		
		int counter_1=0;
		int final_counter=0;
		for(int i=0;i<ind;i++)			//calcuating distance from(x,y) to arr2 (minimum)
		{
			for(int j=0;j<v1;j++)
			{
					if(distanceM[i]+distanceN[counter_1]<min_1)
					{
						min_1=distanceM[i]+distanceN[counter_1];
						final_counter=counter_1;
					}
					counter_1=counter_1+1;
			}
		}
		if(min_1<min)
		{
			int size = my_sizeof(N)/my_sizeof(N[0]);
			int final_index;
			final_index=(final_counter*2)%(size);
		
			int q,r;
			q = N[final_index];
			r = N[final_index+1];
		
			double final_min,final_min2;
			final_min=min_1+distance(q,r,K[0],K[1]);
			for(int i=0;i<index_2;i=i+2)
			{	
				final_min2=min_1+distance(q,r,K[i],K[i+1]);
				if(final_min2<final_min)
				{
					final_min=final_min2;
				}
			}
			cout<<setprecision(11)<<final_min<<endl;
		}
		else
		{
			int size = my_sizeof(M)/my_sizeof(M[0]);
			int final_index;
		
			final_index=(final_counter2*2)%(size);
			int q,r;
			q = M[final_index];
			r = M[final_index+1];
			
			double final_min,final_min2;
			final_min=min+distance(q,r,K[0],K[1]);
			for(int i=0;i<index_2;i=i+2)
			{	
				final_min2=min+distance(q,r,K[i],K[i+1]);
				if(final_min2<final_min)
				{
					final_min=final_min2;
				}
			}
			cout<<setprecision(11)<<final_min<<endl;
		}
		
			
		
	}
}
