#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello world";
	int n,count=0;
	printf("Moi nhap mot ki tu: ");
	scanf("%c",&n);
	for(int i=0;i<strlen(chuoi);i++){
		if(n==chuoi[i]){
			count++;
		}
	}
	printf("so lan xuat hien cua ki tu do: %d",count);
	return 0;
}
