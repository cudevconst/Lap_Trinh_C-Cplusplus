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
	int max=-(pow(10,8)+1);
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
long int min(long int a[],int n)
{
	int min=(pow(10,8)+1);
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n>>m;
	long int a[n],b[m];
	nhap(a,n);
	nhap(b,m);
	cout<<max(a,n)*min(b,m)<<endl;
	}
	
	return 0;
}

