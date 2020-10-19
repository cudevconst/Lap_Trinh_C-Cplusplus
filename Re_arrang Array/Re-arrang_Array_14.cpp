#include<bits/stdc++.h>
#define N 100000;
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k;
	cin>>n>>k;
	int a[n*k][n*k],b[n*k];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			cin>>a[i][j];
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			b[count++]=a[i][j];
		}
	}
	for(int i=0;i<n*k-1;i++)
	{
		for(int j=i+1;j<n*k;j++)
		{
			if(b[i]>b[j])
			swap(b[i],b[j]);
		}
	}
	for(int i=0;i<n*k;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}

	return 0;
}

