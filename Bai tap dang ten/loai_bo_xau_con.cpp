#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	char a[1000],c[100];
	char b[100][100];
	cin.get(a,1000);
	cin.ignore();
	cin.get(c,100);
	char *h=strtok(a," ");
	int k=0;
	while(h!=NULL)
	{
		strcpy(b[k++],h);
		h=strtok(NULL," ");
	}
	for(int i=0;i<k;i++)
	{
		if(strcmp(b[i],c)!=0)
		{
			cout<<b[i]<<" ";
		}
	}
    return 0; 
} 
