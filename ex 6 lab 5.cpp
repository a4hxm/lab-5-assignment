#include<stdio.h>
int main(){
	int age;
	printf("Enter your age :");
	scanf("%d", &age);
	
	age>=18 ? printf("you are eligible to vote, \n") : printf("you are not eligible to vote \n");
	return 0;
}
