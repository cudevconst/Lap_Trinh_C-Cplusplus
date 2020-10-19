#include <iostream> 
using namespace std;
long long chuyen(string a)
{
	long long res=0;
	for(int i=0;i<a.size();i++)
	{
		res=res*10+(a[i]-'0');
	}
	return res;
 } 
int tong(string str) 
{ 
    string temp = ""; 
    int ok;
    int sum = 0; 
    for(int i=0;i<str.size();i++) { 
        if(str[i]>='0' and str[i]<='9')
            temp += str[i]; 
        else
        {
        	sum+=chuyen(temp);
        	temp="";
		}
		}
		return sum+chuyen(temp);
}
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    cin>>a;
    cout<<tong(a)<<endl;
	}
  
    return 0; 
}
