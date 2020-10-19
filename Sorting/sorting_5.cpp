#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void Uni(int a[],int b[],int n,int m)
{
	int i=0,j=0;
	while(i<n and j<m)
	{
		if(a[i]<b[j])
		{
			cout<<a[i++]<<" ";
		}
		else if(a[i]>b[j])
		{
			cout<<b[j++]<<" ";
		}
		else 
		{
			cout<<b[j++]<<" ";
			i++;
		}
	}
	while(i<n)
	cout<<a[i++]<<" ";
	while(j<m)
	cout<<b[j++]<<" ";
}
void inter(int a[],int b[],int n,int m)
{
	int i=0,j=0;
	while(i<n and j<m)
	{
		if(a[i]<b[j])
		{
			i++;
		}
		else if(a[i]>b[j])
		{
			j++;
		}
		else 
		{
			cout<<b[j++]<<" ";
			i++;
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
	int a[n],b[m];
	nhap(a,n);
	nhap(b,m);
	sort(a,a+n);
	sort(b,b+m);
	Uni(a,b,n,m);
	cout<<endl;
	inter(a,b,n,m);
	cout<<endl;

	}
	return 0;
}
