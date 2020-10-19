#include<bits/stdc++.h>

using namespace std;
 void nhap(long int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void sort(long int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
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
	long int a[n];
	nhap(a,n);
	sort(a,n);
	cout<<a[m-1]<<endl;
	}
	
	return 0;
}

