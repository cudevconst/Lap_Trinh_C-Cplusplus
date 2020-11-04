#include <bits/stdc++.h>
using namespace std;
long long M = 1000000007;
int LCD(int a,int b)
{
	return __gcd(a,b);
}
int POW(int a,int b)
{
	long long res=1;
	while(b!=0)
	{
		if(b%2==1)
		{
			res=(res%M*a%M)%M;
		}
		a=(a%M*a%M)%M;
		b/=2;
	}
	return res;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ucln=a[0];
		for(int i=1;i<n;i++)
		{
			ucln=LCD(ucln,a[i]);
		}
		long long res=1;
		for(int i=0;i<n;i++)
		{
			res=(res%M*POW(a[i],ucln)%M)%M;
		}
		cout<<res<<endl;
	}
    return 0;
}
