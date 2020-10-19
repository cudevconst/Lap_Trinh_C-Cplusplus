#include <bits/stdc++.h> 
using namespace std; 
  
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void check(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<i+1;
			break;
		}
	}
}
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
   	int n,x;
   cin>>n>>x;
   int a[n];
   nhap(a,n);
   check(a,n,x);
   cout<<endl;
   }
    return 0; 
} 
