#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int Max=INT_MIN;
	for(int i=0;i<n-1;i++)
	{
		int temp=i;
		for(int j=n-1;j>=i;j--)
		{
			if(a[j]>=a[i])
			{
				temp=j;
				break;
			}
		}
		Max=max(Max,abs(temp-i));
	}
	cout<<Max<<endl;
	}
	
	return 0;
}

