#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]==i)
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			cout<<a[i]<<" ";
		}
		else cout<<"-1 ";
	}
	cout<<endl;
}
	return 0;
}

