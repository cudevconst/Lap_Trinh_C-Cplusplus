#include<bits/stdc++.h>
using namespace std;
int ngto(int n)
{
	if(n<2)
	return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
void check(int n)
{
	int k=0;
	for(int i=2;i<=n/2;i++)
	{
		if(ngto(i)==1 and ngto(n-i)==1)
		{
			cout<<i<<" "<<n-i;
			k++;
			break;
		}

	}
		if(k==0)
		{
			cout<<"-1";
		}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	check(n);
	cout<<endl;
	}
	return 0;
	
}

