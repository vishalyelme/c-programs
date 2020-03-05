#include<stdio.h>
void main(){
	int i,j,num,is_prime,res;
	for(i=1;i<100;i++){
		num = i;
		is_prime=0;
		for(j=2;j<num;j++){
		res=num%j;
		if(res==0){
			is_prime=1;
		}
	}
	if(is_prime==0){
		printf("%d\n",i);
	}
	}
}
