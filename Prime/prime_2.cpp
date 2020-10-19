#include<bits/stdc++.h>

using namespace std;
long long  ngto(long long int n)
{
	long long  t=0;
	while(n%2==0)
	{
		t=n;
		n/=2;
	}
	for(long long i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			t=n;
			n/=i;
		}
	}
	if(n>2)
	{
		t=n;
	}
	return t;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<ngto(n)<<endl;
	}


	return 0;
}

