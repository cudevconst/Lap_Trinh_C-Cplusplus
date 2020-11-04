#include <bits/stdc++.h>
#define ll long long
using namespace std;
void out(string str1,string str2)
{
	unordered_map<char,int> mstr1,mstr2;
	for(int i=0;i<str2.size();i++)
	{
		mstr2[str2[i]]++;
	}
	int st=-1,minlen=101,len=102;
	for(int i=0;i<str1.size();i++)
	{
		int cnt=0;
		mstr1.clear();
		for(int j=i;j<str1.size();j++)
		{
			mstr1[str1[j]]++;
			if(mstr2[str1[j]]!=0 and mstr1[str1[j]]<=mstr2[str1[j]])
			{
				cnt++;
			}
			if(cnt==str2.size()){
				len=j-i+1;
				break;
			}
		}
		if(len<minlen)
		{
			minlen=len;
			st=i;
		}
	}
	if(st==-1)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(int i=0;i<minlen;i++)
		{
			cout<<str1[st++];
		}
	}
	cout<<endl;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		out(a,b);
	}

    return 0;
}
