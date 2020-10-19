#include<bits/stdc++.h>

using namespace std;

long nto(long n)
{
	if(n<1)
	return 0;
	else if(n==1)
	return 1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 1;
	}
	return 1;
	
	
}
long uoc(long n)
{
	for(long i=2;i<=n/2;i++)
	{
		if(nto(i)==1)
		{
		if(n%i==0)
		{
			return i;
			break;
		}
	}
	}
	return n;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
	cin>>n;
	for(long i=1;i<=n;i++)
	{
		cout<<uoc(i)<<" ";
	}
	cout<<endl;
	}
	return 0;
}

