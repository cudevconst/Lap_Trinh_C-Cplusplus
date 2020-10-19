#include<bits/stdc++.h>

using namespace std;
void scan(long long int a[],int n)
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
	long long int a[n];
	scan(a,n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[count++]=a[i];
		}
	}
	while(count<n)
	{
		a[count++]=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}



	return 0;
}

