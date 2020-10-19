#include<bits/stdc++.h>

using namespace std;
const long long cuong = 1e6;
bool a[cuong];
void check()
{
	
	memset(a,true,sizeof(a));
	a[0]=false;a[1]=false;
	for(int i=2;i<=sqrt(cuong);i++)
	{
		if(a[i])
		{
			for(int j=i*i;j<=cuong;j+=i)
			{
				a[j]=false;
			}
		}
	}
	long long n,m;
	int dem=0;
	cin>>n>>m;
	for(int i=n;i<=sqrt(m);i++)
	{
		if(a[i])
		dem++;
	}
	cout<<dem<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m;
	check();
	}

	
	return 0;
}

