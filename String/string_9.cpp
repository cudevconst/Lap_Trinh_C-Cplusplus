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
int Max(string str) 
{ 
    string temp = ""; 
    long long ok;
    long long MAX = 0; 
    for(int i=0;i<str.size();i++) { 
        if(str[i]>='0' and str[i]<='9')
            temp += str[i]; 
        else
        {
        	ok=chuyen(temp);
        	MAX=max(MAX,ok);
        	temp="";
		}
		}
		return max(MAX,chuyen(temp));
}
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    cin>>a;
    cout<<Max(a)<<endl;
	}
  
    return 0; 
}
