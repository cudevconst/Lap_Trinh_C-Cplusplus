#include <bits/stdc++.h> 
using namespace std; 
  
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void check(int a[],int n)
{
	int max=(pow(10,6)+1);
	int t=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(abs(a[i]+a[j])<max)
			{
				max=abs(a[i]+a[j]);
				t=a[i]+a[j];
			}
		}
	}
	cout<<t;
}
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
   	int n,k;
   cin>>n;
   int a[n];
   nhap(a,n);
   check(a,n);
   cout<<endl;
   }
    return 0; 
} 
