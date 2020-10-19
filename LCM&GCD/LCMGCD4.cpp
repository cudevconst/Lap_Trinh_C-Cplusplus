#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
ll large(ll a,string b)
{
	ll mod=0;
	for(int i=0;i<b.size();i++)
	{
		mod=(mod*10+b[i]-'0')%a;
	}
	return mod;
}
ll res(ll a, string b)
{
	ll ans=large(a,b);
	return gcd(a,ans);
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		ll a;
		string b;
		cin>>a;
		cin>>b;
		cout<<res(a,b)<<endl;
	}
	
    return 0;    
}
