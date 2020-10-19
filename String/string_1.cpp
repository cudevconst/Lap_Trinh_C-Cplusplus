#include<bits/stdc++.h>

using namespace std;
int check(string &str)
{
	vector<bool> mark(26,false);
	int index=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a' and str[i]<='z')
		{
			index=str[i]-'a';
		}
		mark[index]=true;
	}
	int count=0;
	for(int i=0;i<26;i++)
	{
		if(mark[i]==0)
		count++;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
	cin>>a;
	int n;
	cin>>n;
	if(n>=check(a))
	cout<<"1"<<endl;
	else cout<<"0"<<endl;
	
	}
	return 0;
}
