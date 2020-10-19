#include<bits/stdc++.h>

using namespace std;
void nhap(long long a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int inter(long long a[],long long b[],long long c[],int n,int m)
{
	int i=0,j=0,k=0;;
	while(i<n and j<m)
	{
		if(a[i]>b[j])
		{
			j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else 
		{
			c[k++]=b[j];
			i++;
		}
	}
	return k;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,n3;
	cin>>n1>>n2>>n3;
	long long a[n1],b[n2],c[n3];
	nhap(a,n1);
	nhap(b,n2);
	nhap(c,n3);
	long long d[n1+n2],e[n1+n2+n3];
	inter(a,b,d,n1,n2);
	int k=inter(a,b,d,n1,n2);
	inter(d,c,e,k,n3);
	int count=0;
	for(int i=0;i<inter(d,c,e,k,n3);i++)
	{
		cout<<e[i]<<" ";
		count++;
	}
	if(count==0)
	{
		cout<<"-1";
	}
	cout<<endl;
	}
	return 0;
}
