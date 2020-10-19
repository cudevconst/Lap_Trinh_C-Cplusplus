#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			k=i;
			break;
		}
	}
	if(k!=-1)
	{
		cout<<"1"<<endl;
	}
	else cout<<"-1"<<endl;
	
	}
	
	
	return 0;
}

