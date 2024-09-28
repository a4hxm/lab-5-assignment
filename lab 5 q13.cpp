#include<stdio.h>
int main(){
	int key;
	char ch,encrypted,decrypted;
	printf("enter a character to encrypt:");
	scanf("%c",&ch);
	printf("enter an  integer encryption key: ");
	scanf("%d",&key);
	
	encrypted=ch^key;
	printf("Encrypted charcter:%c\n",encrypted);
	
	decrypted=key^ch;
	printf("Decryptrd charcter:%c\n");
	
	return 0;
}
