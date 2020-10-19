#include<bits/stdc++.h>

using namespace std;
int ngto(int n,int a[])
{
	int count=0;
	while(n%2==0)
	{
		n/=2;
		a[count++]=2;
	}
	for(int i=3;i<=sqrt(n);i+=2)
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
		int n;
	cin>>n;
	int a[n/2],b[n/2];
	for(int i=0;i<ngto(n,a);i++)
	{
		b[i]=0;
	}
	for(int i=0;i<ngto(n,a);i++)
	{
		for(int j=0;j<ngto(n,a);j++)
		if(a[i]==a[j] and b[i]==0)
		{
			b[i]++;
			b[j]++;
		}
	}
	for(int i=0;i<ngto(n,a);i++)
	{
		if(b[i]>1)
		{
			cout<<a[i]<<" "<<b[i]-1<<" ";
		}
	}
	cout<<endl;
	}
	return 0;
}

