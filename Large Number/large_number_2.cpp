#include<bits/stdc++.h>

using namespace std;
void largeNumver(string a,string b)
{
	string c;
	
	
	int n1=a.size(),n2=b.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int carry=0;
	for(int i=0;i<n1;i++)
	{
		int sum=a[i]-'0'+b[i]-'0'+carry;
		carry=sum/10;
		c.push_back(sum%10+'0');
	}
	for(int i=n1;i<n2;i++)
	{
		int sum=b[i]-'0'+carry;
		carry=sum/10;
		c.push_back(sum%10+'0');
	}
	if(carry>0)
	c.push_back(carry+'0');
	reverse(c.begin(),c.end());
	cout<<c<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string a,b;
	cin>>a>>b;
	string c;
	
	
	int n1=a.size(),n2=b.size();
	if(n1>n2)
	{
		largeNumver(b,a);
	}
	else  largeNumver(a,b);
	
	}
	
	return 0;
}
