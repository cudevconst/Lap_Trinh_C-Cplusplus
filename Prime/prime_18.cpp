#include <bits/stdc++.h> 
using namespace std; 
  
int dem(int m,int n,int a,int b)
{
	int count=0;
	for(int i=m;i<=n;i++)
	{
		if(i%a==0 or i%b==0)
		{
			count++;
		}
	}
	return count;
}
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	int m,n,a,b;
	cin>>m>>n>>a>>b;
	cout<<dem(m,n,a,b)<<endl;
	}
  
    return 0; 
} 
