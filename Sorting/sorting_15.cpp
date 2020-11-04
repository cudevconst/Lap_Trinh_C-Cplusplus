#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long n,k;
	cin>>n>>k;
	long a[n];
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long i=0,j=1;
	long cnt=0;
	while(i<n)
	{
		while(j<n and a[j]-a[i]<k)
		{
			j++;
		}
		cnt+=j-i-1;
		i++;
	}
	cout<<cnt<<endl;
	}
	
	return 0;
}


