#include<stdio.h>
void main(){
	int num,last_no,rem_no,first_no,second_no,third_place,no;
	printf("Enter four digit number:");
	scanf("%d",&num);
	last_no = num%10;
	no=last_no;
	
	rem_no = num/10;
	last_no = rem_no%10;
	third_place=last_no*10;
	rem_no=rem_no/10;
	
	last_no=rem_no%10;
	
	second_no = last_no*100;
	//last_no = rem%10;
	rem_no= rem_no/10;
	first_no=rem_no*1000; 
	printf("%d = %d + %d +%d + %d",num,first_no,second_no,third_place,no);
	
}
