#include<stdio.h>
void main(){
	float num1,num2;
	printf("Enter two numbers:");
	scanf("%f %f",&num1,&num2);
	if(num1>num2){
		printf("%.1f is larger\n",num1);
	}
	else if(num1<num2){
		printf("%.1f is larger\n",num2);
	}
	else{
		printf("Bot are equal\n");
	}
	//using comparison operator
	printf("Result using conditional operator:\n");
	(num1 > num2 && num1!=num2) ? printf("%.1f is greater",num1) : printf("%.1f is greater",num2);
	
}
