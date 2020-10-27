#include<bits/stdc++.h>

using namespace std;
void nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	
	}
}
void xuat(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
}
void sort(int a[][100],int b[][100],int n,int m)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[i][j];
		}
	
	}
	while(d<=n/2)
	{
		for(int i=n-d-1;i>d;i--)
		{
			b[i-1][d]=a[i][d];
		}
		for(int i=d;i<m-d-1;i++)
		{
			b[d][i+1]=a[d][i];
		}
		for(int i=d;i<n-d-1;i++)
		{
			b[i+1][n-d-1]=a[i][n-d-1];
		}
		for(int i=m-d-1;i>d;i--)
		{
			b[n-d-1][i-1]=a[m-d-1][i];
		}
		d++;
	}
}
void slove()
{
	int a[100][100],b[100][100];
	int n,m;
	cin>>n>>m;
	nhap(a,n,m);
	sort(a,b,n,m);
	xuat(b,n,m);

	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		slove();
	}
	
	return 0;
}
