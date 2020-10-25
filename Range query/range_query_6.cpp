#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
long long res(int a[],int n)
{
	vector<long long> b(n,0);
	for(int i=0;i<n;i++)
	{
		//cin>>a[i];
		b[i]=a[i];
	}
	
	
	for(int i=1;i<n;i++)
	{
		int temp=b[i];
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				b[i]=max(b[i],temp+b[j]);
			}
		}
	}
	return *max_element(b.begin(),b.end());
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
		cout<<res(a,n)<<endl;
		}
	
	
	
	return 0;
}

