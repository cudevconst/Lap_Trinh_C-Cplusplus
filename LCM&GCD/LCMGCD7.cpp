#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long ucln( ll x,ll y,ll z)
{
	ll res=(x*y)/(__gcd(x,y));
	return (res*z)/(__gcd(z,res));
}
int main(){

	int t;
	cin>>t;
	while(t--)
	{
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		ll lcm=ucln(x,y,z);
		if(n==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
		ll number=pow(10,n-1);
		ll du=number%lcm;
		if(du==0)
		{
			cout<<number<<endl;
		}
		else
		{
			number+=lcm-du;
		if(number<pow(10,n))
		{
			cout<<number<<endl;
		}
		else cout<<"-1"<<endl;
		}
		}
	}
    return 0;    
}
