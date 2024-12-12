#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello";
	int size=strlen(chuoi);
	for(int i=size;i>=0;i--){
		printf("%c ",chuoi[i]);
	}
	return 0;
}
