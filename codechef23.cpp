#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;
        int a1 = stoi(a);
        int b1= stoi(b);
        int count=0;
        if(b1==0)
        {
            cout<<count<<endl;
            continue;
        }
        while(b1>0)
        {
            string res1 = "";
            for(int i = 0; i < a.size(); i++) 
            {
            if(a[i] == b[i])
            res1 += '0';
            else
            res1 += '1';
            }
            int u= stoi(res1);
            
            string res2 = "";
            for(int i = 0; i < a.size(); i++) 
            {
            if(a[i] == b[i])
            res2 += '1';
            else
            res2 += '0';
            }
            int v= stoi(res2);
            a1=u;
            b1=v*2;
            
            count=count+1;

            }
            cout<<count<<endl;
        
    
    }
}
