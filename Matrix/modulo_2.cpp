#include <iostream> 
using namespace std; 
void modulo2(int x,int y)
{
	int res=1%y;
	for(int i=1;i<y;i++)
   	{
   		if((x*i)%y==res)
   		{
   			cout<<i<<endl;
   			return;
		   }
	   }
	cout<<"-1"<<endl;
	return ;
}
int main()  
{  
   int t;
   cin>>t;
   while(t--)
   {
   	
   	int x,y;
   	cin>>x>>y;
 	modulo2(x,y);
   	
   	
   }

    return 0;  
} 
