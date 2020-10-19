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
	int chan=0,le=0;
	for(int i=0;i<a.size();i+=2)
	{
		le+=a[i]-'0';
	}
	for(int i=1;i<a.size();i+=2)
	{
		chan+=a[i]-'0';
	}
	if(abs(chan-le)%11==0)
	{
		cout<<"1"<<endl;
	}
	else cout<<"0"<<endl;
	}
	return 0;
}
