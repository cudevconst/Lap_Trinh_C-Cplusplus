#include <bits/stdc++.h> 
using namespace std; 
  
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void check(int a[],int n,int k)
{

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
   	int n,k;
   cin>>n>>k;
   int a[n];
   nhap(a,n);
   check(a,n,k);
   cout<<endl;
   }
    return 0; 
} 
