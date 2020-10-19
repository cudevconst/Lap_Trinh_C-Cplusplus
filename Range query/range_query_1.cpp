#include <bits/stdc++.h> 
using namespace std; 
void nhap(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
}
int tong(int a[],int n,int l,int r)
{
	int tong=0;
	for(int i=l;i<=r;i++)
	{
		tong+=a[i];
	}
	return tong;
}
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
	cin>>n>>m;
	int a[n];
	nhap(a,n);
	while(m--)
	{
	int l,r;
	cin>>l>>r;
	cout<<tong(a,n,l,r)<<endl;
	
	}
	}
	
    return 0; 
} 
