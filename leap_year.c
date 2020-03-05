#include<stdio.h>
void main(){
	int month, year,days;
	printf("Enter the month and the year:");
	scanf("%d %d",&month,&year);
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("The year is a leap year!!!\n");
		days = 366;
		if(month==1){
			printf("Number of days in month are: 31");
		}
		else if(month == 2){
			printf("Number of days in month are: 29");
		}
		else if(month == 3){
			printf("Number of days in month are: 31");
		}
		else if(month == 4){
			printf("Number of days in month are: 30");
		}
		else if(month == 5){
			printf("Number of days in month are: 31");
		}
		else if(month == 6){
			printf("Number of days in month are: 30");
		}
		else if(month == 7){
			printf("Number of days in month are: 31");
		}
		else if(month == 8){
			printf("Number of days in month are: 31");
		}
		else if(month == 9){
			printf("Number of days in month are: 30");
		}
		else if(month == 10){
			printf("Number of days in month are: 31");
		}
		else if(month == 11){
			printf("Number of days in month are: 30");
		}
		else if(month == 12){
			printf("Number of days in month are: 31");
		}
		printf("\nTotal number of days in year are:%d\n",days);
	}
	else{
		printf("The year is not a leap year\n");
		days = 365;
		if(month==1){
			printf("Number of days in month are: 31");
		}
		else if(month == 2){
			printf("Number of days in month are: 28");
		}
		else if(month == 3){
			printf("Number of days in month are: 31");
		}
		else if(month == 4){
			printf("Number of days in month are: 30");
		}
		else if(month == 5){
			printf("Number of days in month are: 31");
		}
		else if(month == 6){
			printf("Number of days in month are: 30");
		}
		else if(month == 7){
			printf("Number of days in month are: 31");
		}
		else if(month == 8){
			printf("Number of days in month are: 31");
		}
		else if(month == 9){
			printf("Number of days in month are: 30");
		}
		else if(month == 10){
			printf("Number of days in month are: 31");
		}
		else if(month == 11){
			printf("Number of days in month are: 30");
		}
		else if(month == 12){
			printf("Number of days in month are: 31");
		}
		printf("\nTotal number of days in year are:%d",days);
	}
}
