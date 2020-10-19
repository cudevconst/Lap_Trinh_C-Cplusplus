#include<bits/stdc++.h>

using namespace std;
int ngto(int n)
{
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(ngto(i)==1)
		{
			int k=n-i;
			if(ngto(k)==1)
			{
				cout<<i<<" "<<k<<endl;
			break;
			}
		}
	}
	}
	return 0;
	
}

