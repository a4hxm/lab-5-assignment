#include<stdio.h>
int main(){
	int age;
	printf("enter age \n");
	scanf("%d",&age);
	
	if (age <=12){
		printf("child");
	}else if (age <=19){
		printf("teenager");
	}else if (age <=60){
		printf("adult");
	}else if (age <=80){
		printf("senior");
	}else{
		printf("invalid input");
	}
	return 0;
}
