#include <bits/stdc++.h>
#define ll long long
using namespace std;
string str;
int check(int k)
{
	int dem=0;
	for(int i=0;i<str.size();i++)
	{
		int num=0;
		for(int j=i;j<str.size();j++)
		{
			num=(num*10+(int)(str[j]-'0'))%k;
			if(num==0)
			{
				dem++;
			}
		}
	}
	return dem;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
	//	string str;
		cin>>str;
		cout<<check(8)-check(24)<<endl;
	}
    return 0;
}
