#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void out(int a[],int n,int x)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			swap(a[i],a[j]);
		}
	}
	cout<<a[x-1];
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
	out(a,n,k);
	cout<<endl;
	}
	return 0;
	
}

