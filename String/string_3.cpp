#include<bits/stdc++.h>
using namespace std;
void check(string a)
{
	int num=0;
	int ok=1;
	for(int i=a.size()-1;i>=0;i--)
	{
		num+=(int)(a[i]-'0')*ok;
		ok*=2;
		ok%=5;
	}
	if(num%5==0)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		check(a);
	}
	return 0;
    
}

