#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int kq(int a[],int n)
{
	int k=0,min=2*pow(10,3)+1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			k=abs(a[i]-a[j]);
			if(k<min)
			{
				min=k;
				
			}
		}
	}
	return min;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		
	int n;
	cin>>n;
	int a[n];
	nhap(a,n);
	cout<<kq(a,n)<<endl;

}
	return 0;
}
