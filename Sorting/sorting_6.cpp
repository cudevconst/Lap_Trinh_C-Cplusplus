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
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			swap(b[i],b[j]);
	}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}

