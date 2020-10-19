#include <iostream> 
using namespace std; 
void check(int n,long long int m)
{
	string b="";
	while(m>0)
	{
		int ok=m%10;
		if(ok==4)
		{
			b+="223";
		}
		else if(ok==6)
		{
			b+="35";
		}
		else if(ok==8)
		{
			b+="2227";
		}
		else if(ok==9)
		{
			b+="3327";
		}
		else if (ok>1)
		{
			b+=char(ok+'0');
		}
		m/=10;
	}
	for(int i=0;i<b.size()-1;i++)
	{
		for(int j=i+1;j<b.size();j++)
		{
			if(b[i]<b[j])
			swap(b[i],b[j]);
		}
	}
	cout<<b<<endl;
}
int main()  
{  
   int t;
   cin>>t;
   while(t--)
   {
   int n;
   long long m;
   cin>>n>>m;
   check(n,m);
   }

    return 0;  
} 
