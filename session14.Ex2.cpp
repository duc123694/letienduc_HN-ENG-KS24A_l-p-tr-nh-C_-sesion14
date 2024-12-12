#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello";
	int size=strlen(chuoi);
	for(int i=0;i<size;i++){
		printf("%c ",chuoi[i]);
	}
	return 0;
}
