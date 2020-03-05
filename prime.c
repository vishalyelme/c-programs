#include<stdio.h>
void main(){
	int num,res,i,is_prime=0,oh;
	printf("Enter number:");
	scanf("%d",&num);

	for(i=2;i<num;i++){
		res=num%i;
		if(res==0){
			is_prime=1;
		}
	}
	if(is_prime==0){
		printf("prime");
	}
	else{
		printf("Not Prime");
	}
	

}
