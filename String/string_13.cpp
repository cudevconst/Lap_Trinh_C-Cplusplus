#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
	cin>>a;
	int k;
	cin>>k;
	int res=0;
	int myarray[26];
	for(int i=0;i<a.size();i++)
	{
		memset(myarray,0,sizeof(myarray));
		int dem=0;
		for(int j=i;j<a.size();j++)
		{
			if(myarray[a[j]-'a']==0)
			{
				dem++;
				myarray[a[j]-'a']++;
			}
			if(dem==k)
			{
				res++;
			}
			if(dem>k)
			break;
		}
	}
	cout<<res<<endl;
	}

	return 0;
    
}

