#include<bits/stdc++.h>

using namespace std;
void fibo()
{long long n;
	cin>>n;
	if(n==0 or n==1 )
	{
		cout<<"YES"<<endl;
		return;
	}
	long long a,b,c;
	a=0,b=1;
	for(int i=3;i<=92;i++)
	{
		c=a+b;
		if(c==n)
		{
			cout<<"YES"<<endl;
			return;
		}
		if(c>n)
		{
			cout<<"NO"<<endl;
			return ;
		}
		a=b;
		b=c;
	}
	cout<<"NO"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	fibo();
	
}
	
	return 0;
}

