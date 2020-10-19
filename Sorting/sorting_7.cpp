#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			c[i]=1;
		}
		else c[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]==0)
		{
			cout<<i+1<<" ";
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(c[i]==0)
		{
			cout<<i+1;
			break;
		}
	}
	cout<<endl;
	}
    return 0;    
}
