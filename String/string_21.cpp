#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string a;
	cin>>a;
	int b=a.size();
	for(int i=0;i<b-1;i++)
	{
		for(int j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			swap(a[i],a[j]);
		}
	}
	int index=0;
	string d="";
	for(int i=0;i<b;i++)
	{
		if(a[i]>='A' and a[i]<='Z')
		{
			index=i;
			break;
		}
	}
	for(int i=index;i<b;i++)
	{
		cout<<a[i];
	}
	for(int i=0;i<index;i++)
	{
		d+=a[i];
	}
	int sum=0;
	for(int i=0;i<d.size();i++)
	{
		 sum+=a[i]-'0';
	}
	
	cout<<sum<<endl;
	}
	return 0;
}
