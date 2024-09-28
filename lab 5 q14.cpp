#include<stdio.h>
int main(){
	int age,credit_score;
	float income;
	printf("enter age:");
	scanf("%d",&age);
	printf("enter credit score:");
	scanf("%d",&credit_score);
	printf("enter annual income:");
	scanf("%f",&income);
	
	if((age>=18 && age<=60) && (income>=25000)&& (credit_score>=500)){
		printf("You are eligible for loan\n");
	}else{
		printf("You are not eligibile for loan\n");
	}
	return 0;
}
