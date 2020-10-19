#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(int a[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(abs(a[j]-k)>abs(a[j+1]-k))
			{
				swap(a[j],a[j+1]);
			}
		}
	}
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
		int n;
		cin>>n;
		int k;
		int a[n];
		cin>>k;
		nhap(a,n);
		xuat(a,n,k);
		cout<<endl;
	}
	return 0;
}
