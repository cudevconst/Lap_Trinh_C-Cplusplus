#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	string n=to_string(a);
	string m=to_string(b);
	if(n+m>m+n)
	return true;
	else return false;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	}
	
    return 0;    
}
