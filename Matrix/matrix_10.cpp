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
		cout<<endl;
	}
	
}
void check(int a[][100],int b[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				for(int k=0;k<m;k++)
				{
					b[i][k]=1;
				}
				for(int h=0;h<n;h++)
				{
					b[h][j]=1;
				}
			}
		}
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
	int a[100][100],b[100][100];
	nhap(a,n,m);
	check(a,b,n,m);
	xuat(b,n,m);
	cout<<endl;

	}
	return 0;
}
