#include <bits/stdc++.h>
#define ll long long
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
	int b[n],c[n],d[n];
	for(int i=0;i<n;i++)
	{
		b[i]=1;
		c[i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				b[i]=max(b[i],b[j]+1);
			}
		}
	}
	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]>a[j])
			{
				c[i]=max(c[i],c[j]+1);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		d[i]=b[i]+c[i];
	}
	return *max_element(d,d+n);
	
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<check(a,n)-1<<endl;
	}

    return 0;
}
