#include<stdio.h>
int main (){
	int age;
	char citizen;
	printf("enter your age:",age);
	scanf("%d",&age);
	printf(" are you a citizen (Y/N):",citizen);
	scanf("%s",&citizen);
	
	if (age>= 18 && (citizen== 'Y' || citizen=='N')){
		printf("you are eligible to vote \n");
	}else {
	printf("you are not eligible to vote \n");
}
return 0;
}
