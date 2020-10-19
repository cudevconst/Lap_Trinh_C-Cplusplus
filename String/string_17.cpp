#include <bits/stdc++.h> 
using namespace std; 
#define N 100000
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	cin.ignore();
	char a[N];
	cin.get(a,N);
	int b[N];
	for(int i=0;i<strlen(a);i++)
	{
		b[i]=0;
	}
	for(int i=0;i<strlen(a);i++)
	{
		for(int j=0;j<strlen(a);j++)
		{
			if(a[i]==a[j] and b[i]==0)
			{
				b[i]++;
				b[j]++;
			}
		}
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(b[i]==2)
		{
			cout<<a[i];
		}
	}
	cout<<endl;
	}
    return 0; 
} 
