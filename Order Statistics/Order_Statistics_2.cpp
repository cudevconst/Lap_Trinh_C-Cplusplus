#include<bits/stdc++.h>

using namespace std;
void nhap(long int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
long int max(long int a[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	long int a[n];
	nhap(a,n);
	cout<<max(a,n)<<endl;
	}
	
	return 0;
}

