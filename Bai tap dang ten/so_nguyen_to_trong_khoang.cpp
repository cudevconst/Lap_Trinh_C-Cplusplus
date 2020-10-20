#include<bits/stdc++.h>

using namespace std;
int primme(int n)
{
	if(n<=1)
	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
void xuat(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(primme(i))
		cout<<i<<" ";
	}
}
int main()
{
	int a=0,b=0;
	cin>>a>>b;
	if(a>b)
	{
		xuat(b,a);
	}
	else
	{
		xuat(a,b);
	}

	return 0;
}

