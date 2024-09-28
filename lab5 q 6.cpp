#include<stdio.h>
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	(num>0) ? printf("%d is positive \n",num):
	(num<0) ? printf("%d is negative \n",num):
	printf("%d is zero \n",num);
	return 0;
}
