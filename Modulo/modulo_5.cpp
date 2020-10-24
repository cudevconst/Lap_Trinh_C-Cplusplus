#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string a;
	cin>>a;
	long long b;
	cin>>b;
	long long mod=0;
	for(int i=0;i<a.size();i++)
	{
		mod=(mod*10+a[i]-'0')%b;
	}
	cout<<mod<<endl;
	}

	return 0;
}

