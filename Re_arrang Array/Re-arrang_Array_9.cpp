#include <bits/stdc++.h> 
using namespace std; 
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(int a[],long long int b[],int n)
{
	b[0]=a[0]*a[1];
	b[n-1]=a[n-1]*a[n-2];
	for(int i=1;i<n-1;i++)
	{
		b[i]=a[i-1]*a[i+1];
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
	long long int b[n];
	nhap(a,n);
	xuat(a,b,n);
	cout<<endl;
	}


	
    return 0; 
} 
