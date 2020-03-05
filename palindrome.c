 #include<stdio.h>
 void main(){
 	int num,var;
 	int rev=0;
 	printf("Enter the number :");
 	scanf("%d",&num);
 	var=num;
 	while(num!=0){
 		rev=rev*10;
 		rev=rev+num%10;
 		num=num/10;
	 }
	 if(var==rev){
	 	printf("Number is palindrome\n");	
	 }
	 else{
	 	printf("Number is not palindrome\n");
	 }
	 printf("%d",rev);
 }
