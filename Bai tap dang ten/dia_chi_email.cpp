#include <bits/stdc++.h> 
using namespace std; 
char first(char *a)
{
	return a[0];
}

int main() 
{ 
	char a[100],b[10][10];
	cin.get(a,100);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>='A' and a[i]<='Z')
		{
			a[i]+=32;
		}
	}
  	char *h=strtok(a," ");
  	int k=0;
  	while(h!=NULL)
  	{
  		strcpy(b[k++],h);
  		h=strtok(NULL," ");
	}
	cout<<b[k-1];
	for(int i=0;i<k-1;i++)
	{
		cout<<first(b[i]);
	}
	cout<<"@ptit.edu.vn";
    return 0; 
} 
