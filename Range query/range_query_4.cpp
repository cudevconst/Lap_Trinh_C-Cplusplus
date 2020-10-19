#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long n;
	cin>>n;
	long a[n];
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long alpha=a[0],beta=0;
	for(long i=0;i<n;i++)
	{
		beta=beta+a[i];
		if(alpha<beta)
		{
			alpha=beta;
		}
		if(beta<0)
		{
			beta=0;
		}
	}
	cout<<alpha<<endl;
	}
    return 0;    
}
