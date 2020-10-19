#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int search(int a[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		if(a[mid]==x)
		return mid;
		if(a[mid]>x)
		return search(a,l,mid-1,x);
		return search(a,mid+1,r,x);
	}
	return -1;
}
void check(int a[],int n,int x)
{
	for(int i=0;i<n-1;i++)
	{
		if(search(a,i+1,n-1,a[i]+x)!=-1)
		{
			cout<<"1"<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
	
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
	check(a,n,k);
	}

	
	return 0;
}
