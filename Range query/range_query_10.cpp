#include <iostream> 
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
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
    int a[n];
    nhap(a,n);
    int count=0;
    int i=0,j=n-1;
    while(i<=j)
    {
    	if(a[i]<a[j])
    	{
    		i++;
    		a[i]+=a[i-1];
    		count++;
		}
		else if(a[i]==a[j])
		{
			i++;
			j--;
		}
		else 
		{
			j--;
			a[j]+=a[j+1];
			count++;
			
		}
	}
  	cout<<count<<endl;
	}
    return 0; 
}
