#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
	cin>>n>>k;
	int value=n;
	int a[n];
	int dem=0;
	for(int i=0;i<n;i++)
	{
		a[i]=value--;
	}
	for(int i=0;i<n;i++)
	{
		while(a[i]%k==0)
		{
			dem++;
			a[i]/=k;
		}
	}
	cout<<dem<<endl;
	}
    return 0;    
}
