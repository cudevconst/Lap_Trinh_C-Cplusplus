#include <bits/stdc++.h> 
using namespace std; 
#define N 1000
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
	char a[N];	
	char b[N][N];
	cin.get(a,N);

	char *h=strtok(a," ");
	int k=0;
	while(h!=NULL)
	{
		strcpy(b[k++],h);
		h=strtok(NULL," ");
	}
	
	for(int i=k-1;i>=0;i--)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	}
    return 0; 
} 
