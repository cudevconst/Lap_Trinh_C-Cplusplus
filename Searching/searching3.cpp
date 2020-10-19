#include <bits/stdc++.h> 
using namespace std; 
void nhap(int a[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		cin>>a[i];
	}
}
void check(int a[],int b[],int n)
{
	for(int i=1;i<=n;i++)
	{
		b[i]=0;
	}
	for(int i=1;i<=n-1;i++)
	{
		b[a[i]]=1;
	}
}
void xuat(int a[],int b[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			cout<<i;
			break;
		}
	}
}
int main() 
{ 
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	int n;
	 cin>>n;
	 int a[n],b[n];
	 nhap(a,n);
	 check(a,b,n);
	 xuat(a,b,n); 
	cout<<endl;
	}
	
	
	
	
	

    return 0; 
} 
