#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
	
	string a;
	cin>>a;
	int index=0;
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i]>a[i+1])
		{
			
			index=i;
			
			
		}
		
	}
	if(index==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
	int Min_index=0;
	int Min_elemen=10;
	for(int i=index+1;i<a.size();i++)
	{
		if(a[i]>=a[index])
		{
			continue;
		}
		else
		{
			if(abs(a[i]-a[index])<Min_elemen )
			{
				Min_elemen=abs(a[i]-a[index]);
				Min_index=i;
			}
		}
	}
	swap(a[index],a[Min_index]);
	
	cout<<a<<endl;
}
	}
    return 0;    
}
