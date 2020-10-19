#include<bits/stdc++.h>

using namespace std;
int ngto(int n,int a[])
{
	int count=0;
	while(n%2==0)
	{
		a[count++]=2;
		n/=2;
	}
	for(int i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		{
			a[count++]=i;
			n/=i;
		}
	}
	if(n>2)
	{
		a[count++]=n;
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
	cin>>n>>k;
	int a[n/2];
	if(k>ngto(n,a))
	{
		cout<<"-1";
	}
	else{
	cout<<a[k-1];
	
	
	}
	cout<<endl;
	}
	return 0;
}

