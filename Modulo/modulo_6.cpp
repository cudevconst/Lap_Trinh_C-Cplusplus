#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll modm(string a,ll m)
{
	ll res=0;
	for(int i=0;i<a.size();i++)
	{
		res=(res*10+(int)(a[i]-'0'))%m;
	}
	return res;
}
ll kq(ll res,ll b,ll m)
{
	if(b==0)
	return 1;
	if(b==1)
	return res%m;
	if(b%2==0)
	return kq(res*res%m,b/2,m);
	else 
	return (res*kq(res*res%m,b/2,m))%m;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		ll b,m;
		cin>>b>>m;
		ll ans=modm(a,m);
		cout<<kq(ans,b,m)<<endl;
	}
    return 0;
}
