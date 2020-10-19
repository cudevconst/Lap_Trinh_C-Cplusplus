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
   bool a[n+1];
  
   memset(a,true, sizeof(a)); 
   a[0]=0,a[1]=0;
   for(int i=2;i*i<=n;i++)
   {
   		if(a[i]==true)
   		{
   			for(int j=i*2;j<=n;j+=i)
			   {
			   	a[j]=false;
				}	
		}
   }
   for(int i=0;i*i<=n;i++)
   {
   	if(a[i])
   	{
   		cout<<i*i<<" ";
	   }
   }
   cout<<endl;
   }
    return 0; 
} 
