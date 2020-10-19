#include<bits/stdc++.h>
int main(){
	char c[1000];
	gets(c);
	int so = 0, chu = 0, cnt = 0; 
	for(int i = 0;i <strlen(c);i++){
		if((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')) chu++;
		else if(c[i] >= '0' && c[i] <= '9') so++;
		else cnt++;
	}
	printf("%d %d %d",so,chu,cnt);
}
