#include <bits/stdc++.h> 
using namespace std; 
  
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int check(int a[],int n)
{

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				return a[i];
				break;
			}
		}
	}
	return -1;
}
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   cin>>n;
   int a[n];
   nhap(a,n);
   cout<<check(a,n)<<endl;
   }
    return 0; 
} 
