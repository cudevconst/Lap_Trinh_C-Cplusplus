#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll kq(ll a,ll b,ll c)
{
	if(a==0 or b==0)
	return 0;
	if(a==1 or b==1)
	return (a*b)%c;
	if(b%2==0)
	return kq(a+a%c,b/2,c);
	else return (a+kq(a+a%c,b/2,c))%c;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		cout<<kq(a,b,c)<<endl;
	}
    return 0;
}
