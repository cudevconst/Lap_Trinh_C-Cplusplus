#include<bits/stdc++.h>

using namespace std;
long long gcd(long a,long b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
	long int a,b;
	cin>>a>>b;
	cout<<a*b/gcd(a,b)<<" "<<gcd(a,b)<<endl;
	}
	
	return 0;
}

