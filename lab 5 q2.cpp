#include<stdio.h>
int main(){
	int num;
	printf("enter a number \n");
	scanf("%d",&num);
	
	if (num>0){
		if (num % 2==0){
			printf("The number is positive and even \n");
		}else{
			printf("The number is positive and even");
		}
	}else {
		if (num<0){
			printf("The number is negative \n");
		}else {
			printf("The number is zero \n");
		}
	}
	return 0;
}
