#include<iostream>

using namespace std;
void slove()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			a[i]=2*a[i];
			a[i+1]=0;
		}
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[k++]=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		slove();
	}
	return 0;
}
