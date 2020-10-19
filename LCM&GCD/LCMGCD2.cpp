#include <bits/stdc++.h> 
using namespace std; 


long long gcd(long long a,long long b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
long long lcm(long long n)
{
	long long ok=1;
	for(long long i=1;i<=n;i++)
	{
		ok=(ok*i)/gcd(ok,i);
	}
	return ok;
}
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	long long  n;
	cin>>n;
	cout<<lcm(n)<<endl;
	}
	
    return 0; 
} 
