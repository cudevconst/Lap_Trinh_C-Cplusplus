#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==0 or n==1)
		cout<<n<<endl;
		else 
		{
		long long a,b,c;
		a=0,b=1;
		int i=2;
		while(i<=n)
		{
			c=(a%mod+b%mod)%mod;
			a=b;
			b=c;
			i++;
		}
		cout<<c<<endl;
		}
		
	
	}
	
	return 0;
}

