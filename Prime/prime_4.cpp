#include<bits/stdc++.h>

using namespace std;
int uoc(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return i;
			break;
		}
	}
	return n;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cout<<uoc(i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
