#include<bits/stdc++.h>
using namespace std;
void xuat(int a[],int n,int k);
void tohop(int a[],int n,int k,int i);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k;
	cin>>n>>k;
	int a[k];
	a[0]=0;
	tohop(a,n,k,1);
	cout<<endl;
	}
	
	return 0;
}
void xuat(int a[],int n,int k)
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void tohop(int a[],int n,int k,int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)
		xuat(a,n,k);
		else tohop(a,n,k,i+1);
	}
}
