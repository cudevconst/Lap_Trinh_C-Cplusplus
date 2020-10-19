#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long alpha=a[0];
	long beta=0;
	long deta=0;
	for(long i=1;i<n;i++)
	{
		deta=max(alpha,beta);
		alpha=beta+a[i];
		beta=deta;
	}
	if(alpha>beta)
	{
		cout<<alpha<<endl;
	}
	else cout<<beta<<endl;
}
    return 0;    
}
