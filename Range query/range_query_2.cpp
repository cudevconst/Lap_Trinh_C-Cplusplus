#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int gtln(int a[],int n1,int n2)
{
	int max=0,index=0;
	for(int i=n1;i<=n2;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
			index=i;
		}
	}
	return index;
}
int check(int a[],int n1,int n2,int index)
{
	
	for(int i=n1;i<index;i++)
	{
		if(a[i]>a[i+1])
		return 0;
	}
	for(int i=index;i<n2;i++)
	{
		if(a[i]<a[i+1])
		return 0;
	}
	return 1;
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
	int n1,n2;
	cin>>n1>>n2;
	if(check(a,n1,n2,gtln(a,n1,n2))==1)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
	}

	
	return 0;
}
