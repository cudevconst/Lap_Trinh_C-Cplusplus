#include<bits/stdc++.h>
using namespace std;
void nhap(int a[100][100],int n);
int res(int a[100][100],int n);
/*
	tinh tong cua hang va cot=max
	+ neu cot lon hon thi tru max voi tung hang
	+ neu hang lon hon thi tru max voi tung cot
	tim ra count

*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int a[100][100];
	nhap(a,n);
	cout<<res(a,n)<<endl;
	}
	return 0;
}
void nhap(int a[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}
int res(int a[100][100],int n)
{
	int sumCol[n],sumRol[n];
	memset(sumCol,0,sizeof(sumCol));
	memset(sumRol,0,sizeof(sumRol));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sumCol[j]+=a[i][j];
			sumRol[i]+=a[i][j];
		}
	}
	int maxSumCol=0,maxSumRol=0;
	maxSumCol=*max_element(sumCol,sumCol+n);
	maxSumRol=*max_element(sumRol,sumRol+n);
	int count=0;
	if(maxSumCol>maxSumRol)
	{
		for(int i=0;i<n;i++)
		{
			count+=maxSumCol-sumCol[i];
		}
	}
	else 
	{
		for(int i=0;i<n;i++)
		{
			count+=maxSumRol-sumRol[i];
		}
	}
	return count;
	

}
