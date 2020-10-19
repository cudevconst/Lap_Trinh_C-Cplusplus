#include<bits/stdc++.h>

using namespace std;

void slove()
{
	string a;
	cin>>a;
	int count=a.size();
	for(int i=0;i<a.size()-1;i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
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
