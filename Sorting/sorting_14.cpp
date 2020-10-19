#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			swap(a[i],a[j]);
		}
	}
	int dem=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			dem+=a[i+1]-a[i]-1;
		}
		else dem+=0;
	}
	cout<<dem<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int a[n];
	nhap(a,n);
	sort(a,n);
	}
	
	
	
	return 0;
}

