#include<bits/stdc++.h>

using namespace std;
 void nhap(long int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void mang(long int a[],long int b[],long int c[],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(int j=0;j<m;j++)
	{
		c[n+j]=b[j];
	}
}
void sort(long int a[],int n)
{
	for(int i=0;i<n-1;i++)
	
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void xuat(long int a[],int n)
{
	for(int i=0;i<n;i++)
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
	int n,m;
	cin>>n>>m;
	int k=n+m;
	long int a[n],b[m],c[n+m];
	nhap(a,n);
	nhap(b,m);
	mang(a,b,c,n,m);
	sort(c,k);
	xuat(c,k);
	cout<<endl;
	}
	
	return 0;
}
	
