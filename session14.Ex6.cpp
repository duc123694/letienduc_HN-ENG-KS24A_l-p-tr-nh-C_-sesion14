#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello world ";
	int count=0;
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]<='z'&&chuoi[i]>='a'||chuoi[i]>='A'&&chuoi[i]<='Z'){
			count++;
		}
	}
	printf("so ky tu la chu cai trong chuoi la : %d",count);
	return 0;
}
