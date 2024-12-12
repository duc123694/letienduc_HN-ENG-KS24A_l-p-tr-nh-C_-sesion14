#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello world";
	int count=0,n;
	n=' ';
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]==n){
			count++;
		}
	}
	printf("so tu trong chuoi la : %d",count+1);
	return 0;
}
