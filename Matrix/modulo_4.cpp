#include <iostream> 
using namespace std; 
int modulo3(int x,int y)
{
	int count1=x/y;
	int res1=count1*(y*(y-1))/2;
	int count2=x%y;
	int res2=0;
	res2=((count2)*(count2+1))/2;
	if(res1+res2==y)
	return 1;
	return 0;
}
int main()  
{  
   int t;
   cin>>t;
   while(t--)
   {
   	
   	int x,y;
   	cin>>x>>y;
 	cout<<modulo3(x,y)<<endl;
   	
   	
   }

    return 0;  
} 
