#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long n,k;
	cin>>n>>k;
	long a[n];
	for(long i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int bad=0,count=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]<=k)
		++count;
	}
	for(int i=0;i<count;++i)
	{
		if(a[i]>k)
			++bad;
	}
	int res=bad;
	for(int i=0, j=count;j<n;++i,++j)
	{
		if(a[i]>k)
		--bad;
		if(a[j]>k)
		++bad;
		res=min(res,bad);
	}
	
	cout<<res<<endl;
	}
    return 0;    
}
