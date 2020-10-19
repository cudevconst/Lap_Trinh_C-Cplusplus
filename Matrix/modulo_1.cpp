#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	long long x,y,z;
	cin>>x>>y>>z;
	long long res=1;
	int i=0;
	while(i<y)
	{
		res=(res*x%z)%z;
		i++;
	}
	cout<<res<<endl;
	}
    return 0;    
}
