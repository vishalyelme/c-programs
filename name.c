#include<stdio.h>
void main(){
	int base,index,pow=1,i;
	printf("Enter base and index:");
	scanf("%d %d", &base, &index);
	pow = 1;
	for(i=0;i<index;i++){
		pow = pow*base;
	}
	printf("%d",pow);
}
