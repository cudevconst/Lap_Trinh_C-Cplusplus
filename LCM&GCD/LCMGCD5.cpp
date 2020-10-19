#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ucln(ll a,ll b)
{
	if(b==0)
	return a;
	return ucln(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		ll a,x,y;
	cin>>a>>x>>y;
	int ok=ucln(x,y);
	for(int i=0;i<ok;i++)
	{
		cout<<a;
	}
	cout<<endl;
	}
    return 0;    
}
