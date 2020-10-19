#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
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
	int a[n];
	nhap(a,n);
	
	long long Max=a[0];
	for(int i=0;i<n-1;i++)
	{
		long long tich=a[i];
		for(int j=i+1;j<n;j++)
		{
			tich*=a[j];
			Max=max(Max,tich);
		}
		
	}
	cout<<Max<<endl;
}
	return 0;
}
