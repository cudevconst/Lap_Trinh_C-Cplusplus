#include<bits/stdc++.h>

using namespace std;
void nhap(long long a[],int n)
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
	long long a[n];
	
	nhap(a,n);
	int b[10];
	for(int i=0;i<=9;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		while(a[i]>0)
		{
			b[a[i]%10]=1;
			a[i]/=10;
		}
	}
	for(int i=0;i<=9;i++)
	{
		if(b[i]>0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	}

	return 0;
}
