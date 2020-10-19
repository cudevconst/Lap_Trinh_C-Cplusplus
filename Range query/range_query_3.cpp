#include<bits/stdc++.h>

using namespace std;
int check(int l,int r)
{
	vector <bool> a(l+(r-l),true);
	a[0]=a[1]=false;
	for(int i=2;i<=sqrt(r);i++)
	{
		if(a[i])
		{
			for(int j=i*i;j<=r;j+=i)
			{
				a[j]=false;
			}
		}
	}
	int count=0;
	for(int i=l;i<=r;i++)
	{
		if(a[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int l,r;
	cin>>l>>r;
	cout<<check(l,r)<<endl;
	}
	
	return 0;
}
