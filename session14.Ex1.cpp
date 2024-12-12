#include<stdio.h>
#include <string.h>
int main(){
	char chuoi[100];
	printf("Moi nhap chuoi ki tu: ");
	fgets(chuoi,100,stdin);
	chuoi[strlen(chuoi) - 1] = '\0';
	printf("chuoi ky tu cua ban la:%s \n",chuoi);
	printf("do dai cua chuoi: %d",strlen(chuoi));
	return 0;
	
}
