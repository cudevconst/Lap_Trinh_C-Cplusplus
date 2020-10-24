#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n);
int check(int a[],int n);

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
	cout<<check(a,n)<<endl;
	}
	return 0;
}
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
}
int check(int a[],int n)
{
	vector<int> b(n,1);
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				b[i]=max(b[i],b[j]+1);
			}	
		}
	}
	return *max_element(b.begin(),b.end());
}
