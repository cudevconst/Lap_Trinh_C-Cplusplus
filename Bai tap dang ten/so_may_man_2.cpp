#include <bits/stdc++.h>
using namespace std;
long check(string a)
{
	long num=0;
	for(int i=0;i<a.size();i++)
	{
		num+=(a[i]-'0');
	}
	if(num>9)
	{
		string strnum;
		strnum=to_string(num);
		return check(strnum);
	}
	else return num;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
	string a;
	cin>>a;
	if(check(a)==9)
	cout<<"1"<<endl;
	else cout<<"0"<<endl;
	}
	
	return 0;
    
}

