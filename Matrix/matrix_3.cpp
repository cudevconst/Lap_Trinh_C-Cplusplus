#include<bits/stdc++.h>
using namespace std;
void nhap(int a[100][100],int n,int m);
void res(int a[100][100],int n,int m);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
	cin>>n>>m;
	int a[100][100];
	nhap(a,n,m);
	res(a,n,m);
		cout<<endl;
	}
	return 0;
}
void nhap(int a[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}
void res(int a[100][100],int n,int m)
{
	int b[10000];
	int k=0;
	int d=0;
	while(d<=n/2)
	{
		for(int i=d;i<m-d;i++)
		{
			b[k++]=a[d][i];
		}
		for(int i=d+1;i<n-d;i++)
		{
			b[k++]=a[i][m-d-1];
		}
		for(int i=m-d-2;i>=d;i--)
		{
			b[k++]=a[n-d-1][i];
		}
		for(int i=n-d-2;i>d;i--)
		{
			b[k++]=a[i][d];
		}
		d++;
	}
	for(int i=0;i<n*m;i++)
	{
		cout<<b[i]<<" ";
	}
}
