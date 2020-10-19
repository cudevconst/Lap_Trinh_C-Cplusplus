#include<bits/stdc++.h>

using namespace std;
int ngto(int n)
{
	 int a[10000];
	 int k=0;
	 while(n%2==0)
	 {
	 	a[k++]=2;
	 	n/=2;
	 }
	 for(int i=3;i<=sqrt(n);i+=2)
	 {
	 	while(n%i==0)
	 	{
	 		a[k++]=i;
			n/=i;	
		}
	 }
	 if(n>1)
	 {
	 	a[k++]=n;
	 }
	if(k!=3)
	{
		return 0;
	}
	else 
	{
		for(int i=0;i<k-1;i++)
	{
		if(a[i]==a[i+1])
		return 0;
	}
	return 1;
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
cout<<ngto(n)<<endl;
	}

	return 0;
}

