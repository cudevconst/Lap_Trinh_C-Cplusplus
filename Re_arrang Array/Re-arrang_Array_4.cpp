#include <bits/stdc++.h> 
using namespace std; 
void nhap(int a[],int n)
{

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void xuat(int a[],int b[],int n)
{
	int k=0;
	for(int i=0;i<n;i+=2)
	{
		b[i]=a[k++];
	}
	for(int i=1;i<n;i+=2)
	{
		b[i]=a[k++];
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
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
   int b[n];
   nhap(a,n);
   sort(a,a+n);
   xuat(a,b,n);
   cout<<endl;
   }

    return 0;  
} 
