#include<stdio.h>
int main(){
	int score1,score2,score3;
	printf("Enter three test score:");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	if(score1>50 && score2>50 && score3>50){
		printf("you passed all the test. \n");
	} else{
		printf("you did not pass all the test. \n");
	}
	return 0;
}

