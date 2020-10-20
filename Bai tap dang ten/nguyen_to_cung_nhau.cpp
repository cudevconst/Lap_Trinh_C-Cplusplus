#include<bits/stdc++.h>

using namespace std;
int ucln(int a,int b)
{
	if(b==0)
	return a;
	return ucln(b,a%b);
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
		int x;
		cin>>x;
		int dem=0;
		for(int i=1;i<=x;i++)
		{
			if(ucln(i,x)==1)
			{
				dem++;
			}
		}
		if(ngto(dem)==1)
		{
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	
	
	return 0;
}

