#include<stdio.h>
void main(){
	int i,j,k,row=4,col=4;
	for(i=4;i>=1;i--){
		for(k=i;k<=row-1;k++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
