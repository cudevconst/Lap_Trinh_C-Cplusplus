#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
	cin>>n>>k;
	int a[n];
	nhap(a,n);
	long long sum=0,res=0;
	long long Max=INT_MIN;
	int index1=0,index2=0;
	for(int i=0;i<=n-k;i++)
	{
		
		for(int j=i;j<i+k;j++)
		{
			sum+=a[j];
		}
		if(Max<sum)
		{
			Max=sum;
			index1=i;
			index2=k+i-1;
		}
		sum=0;
		
	}
	for(int i=index1;i<=index2;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
    return 0;    
}
