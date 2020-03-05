#include<stdio.h>
void main(){
	int ch;
	printf("Enter the acii value:");
	scanf("%d",&ch);
	if(ch > 65 && ch <= 90 || ch > 97 && ch <= 122){
	printf("the alphabet is:%c",ch);	
	}
	else{
		printf("The acii value entered does not any alphabet");
	}
	
	
}
