#include<bits/stdc++.h>
using namespace std;
string a;
int cnt=0;
void xet()
{
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='1' and a[i+1]=='0' and a[i+2]=='0')
		{
			cnt+=3;
			a.erase(i,3);
			xet();
		}
	}
}
int main ()
{

	int t;
	cin>>t;
	int ok=0;
	while(t--)
	{
	cin>>a;
	xet();
	
	cout<<cnt-ok<<endl;
	ok=cnt;
	}
	return 0;
    
}

