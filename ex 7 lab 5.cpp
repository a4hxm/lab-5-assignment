#include<stdio.h>
int main(){
	int a=5; //binary:0101
	int b=9; //binary:1001
	
	printf("a & b =%d \n",a & b ); //AND operator 
	printf("a | b =%d \n",a |b); // OR operator 
	printf("a ^ b =%d \n",a^b); //XOR operator
	printf("a=%d \n",~a); //NOT operator
	return 0;
}
