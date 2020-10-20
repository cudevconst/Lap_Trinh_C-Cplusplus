#include<bits/stdc++.h>

using namespace std;
int checkfibo(int n)
{
	if(n==0 or n==1)
	return 1;
	int a=0,b=1,c;
	for(int i=3;i<50;i++)
	{
		c=a+b;
		if(n==c)
		{
			return 1;
		}
		if(c>n)
		{
			return 0;
		}
		a=b;
		b=c;
	}
	return 0;
}
void fibo(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bool b[n+1];
	memset(b,true,sizeof(b));
	for(int i=0;i<n;i++)
	{
		if(checkfibo(a[i])==0)
		{
			b[i]=false;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i])
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int a[1000],n;
	cin>>n;
	fibo(a,n);
	cout<<endl;
	
}
	
	return 0;
}

