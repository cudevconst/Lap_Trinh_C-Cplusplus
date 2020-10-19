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
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<a[j++]<<" ";
		}
		else
		{
			cout<<a[n-j]<<" ";
		}
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
