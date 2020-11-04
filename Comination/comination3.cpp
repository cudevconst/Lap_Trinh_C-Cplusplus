#include <bits/stdc++.h>

using namespace std;

int n,a[21],b[20];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<" ";
}
void hoanvi(int k)
{
	if(k>n)
	xuat();
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			b[i]=1;
			a[k]=i;
			hoanvi(k+1);
			b[i]=0;
		}
	}
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		hoanvi(1);
		cout<<endl;
	}
	
    return 0;
}
