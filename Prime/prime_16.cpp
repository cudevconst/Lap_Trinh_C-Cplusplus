#include<bits/stdc++.h>

using namespace std;
const long long N=1e6;
long a[N];
void sang()
{

	memset(a,1,sizeof(N));
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=sqrt(N);i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
			{
				a[j]=1;
			}
			
		}
	}
	
	
}
void check()
{

	long long n;
	cin>>n;
	int dem=0;
	for(int i=0;i<=sqrt(n);i++)
	{
		if(a[i]==0)
		{
			dem++;
		}
	}
	cout<<dem<<endl;
}

int main()
{
int t;
cin>>t;
while(t--)
{
	sang();
	check();

}
	
	return 0;
}

