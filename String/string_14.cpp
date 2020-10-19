#include<bits/stdc++.h>

using namespace std;
int wordCount(char *a)
{
	int ok=0,count=0;
	while(*a)
	{
		if(*a==' ' or *a=='\t' or *a=='\n')
		{
			ok=0;
		}
		else if(ok==0)
		{
			ok=1;
			count++;
		}
		a++;
	}
	return count;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	
	{
		cin.ignore();
	char a[1000];
	cin.get(a,1000);
	cout<<wordCount(a)<<endl;
	}
	
	return 0;
}
