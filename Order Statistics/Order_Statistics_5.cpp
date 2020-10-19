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
	int min=0;
	
	for(int i=0;i<n-1;i++)
	{
		int sum=0;
		for(int j=i+1;j<n;j++)
		{
			sum=a[i]-a[j];
			{
				if(sum<min)
				{
					min=sum;
				}
			}
		}
	}
	if(min==0)
	cout<<"-1"<<endl;
	else cout<<-min<<endl;
	}
	
	
	
	return 0;
}
