#include<bits/stdc++.h>

using namespace std;
void out(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		
	}
	cout<<" ";
}
void nhiphan(int a[],int n,int i)
{
	if(i==n)
	{
		out(a,n);
		return;
	}
	a[i]=0;
	nhiphan(a,n,i+1);
	a[i]=1;
	nhiphan(a,n,i+1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[n];
	nhiphan(a,n,0);
	cout<<endl;
	}

	return 0;
}

