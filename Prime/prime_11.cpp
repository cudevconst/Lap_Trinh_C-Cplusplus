#include <bits/stdc++.h>
using namespace std;
void slove()
{
	
	int a[7]={2,3,5,7,13,17,19};
	long long b[7];
	long long n;
	cin>>n;
	for(int i=0;i<7;i++)
	{
		b[i]=pow(2,a[i]-1)*(pow(2,a[i])-1);
	
	}
	for(int i=0;i<7;i++)
	{
		if(n==b[i])
		{
			cout<<"1"<<endl;
			return;
		}
	}
	cout<<"0"<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		slove();
	}
    return 0;    
}
