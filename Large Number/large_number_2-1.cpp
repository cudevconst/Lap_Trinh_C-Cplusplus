#include <bits/stdc++.h>
using namespace std;
void largeNumber(string a,string b)
{
	while(a.size()<b.size())
	{
		a="0"+a;
	}
	while(b.size()<a.size())
	{
		b="0"+b;
	}
	if(a<b)
	{
		swap(a,b);
	}
	string res="";
	int num,carry=0;
	for(int i=a.size()-1;i>=0;i--)
	{
		num=(a[i]-'0')+(b[i]-'0')+carry;
		if(num>9)
		{
			res=(char)(num%10+'0')+res;
			carry=1;
		}
		else 
		{
			res=(char)(num%10+'0')+res;
			carry=0;
		}
		
	}
	if(carry)
	res=(char)(carry+'0')+res;
	cout<<res<<endl;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a;
		cin>>b;
		largeNumber(a,b);
	}
    
}
