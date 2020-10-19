#include<bits/stdc++.h>

using namespace std;
void nhap(int a[][100],int b[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			b[k++]=a[i][j];
		}
	}
}
void res(int b[],int n,int k)
{
	for(int i=0;i<n*n-1;i++)
	{
		for(int j=i+1;j<n*n;j++)
		{
			if(b[i]>b[j])
			swap(b[i],b[j]);
		}
	}
	cout<<b[k-1]<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k;
	cin>>n>>k;
	int a[100][100];
	int b[n*n];
	nhap(a,b,n);
	res(b,n,k);
	}
	return 0;
}
