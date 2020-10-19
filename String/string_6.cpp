#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
	cin>>a>>b;
	string astring=to_string(a);
	string bstring=to_string(b);
	string cstring=to_string(a);
	string dstring=to_string(b);
	for(int i=0;i<astring.size();i++)
	{
		if(astring[i]=='6')
		{
			astring[i]='5';
		}
	}
	for(int i=0;i<bstring.size();i++)
	{
		if(bstring[i]=='6')
		{
			bstring[i]='5';
		}
	}
	stringstream ssastring(astring);
	stringstream ssbstring(bstring);
	long long mynumber1=0;
	long long mynumber2=0;
	ssastring>>mynumber1;
	ssbstring>>mynumber2;
	cout<<mynumber1+mynumber2<<" ";
	for(int i=0;i<cstring.size();i++)
	{
		if(cstring[i]=='5')
		{
			cstring[i]='6';
		}
	}
	for(int i=0;i<dstring.size();i++)
	{
		if(dstring[i]=='5')
		{
			dstring[i]='6';
		}
	}
	stringstream sscstring(cstring);
	stringstream ssdstring(dstring);
	long long mynumber3=0;
	long long mynumber4=0;
	sscstring>>mynumber3;
	ssdstring>>mynumber4;
	cout<<mynumber3+mynumber4<<endl;
	}
    return 0;    
}
