#include<bits/stdc++.h>

using namespace std;
int tong(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int tich(int n)
{
	int res=0;
	while(n%2==0)
	{
		n/=2;
		res+=tong(2);
	}
	
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			res+=tong(i);
			n/=i;
		}
	}
	if(n>1)
	res+=tong(n);
	return res;
}
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
		if(tong(n)==tich(n) and ngto(n)==0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

