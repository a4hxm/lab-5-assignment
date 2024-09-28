#include<stdio.h>
int main(){
	int age=20;
	int haslicense=1;
	
	if (age>=18 && haslicense){
		printf("you are eligible to drive \n");
	}else {
		printf("you are not eligible \n");
	}
	return 0;
}
