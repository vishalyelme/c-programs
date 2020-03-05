#include<stdio.h>
void main(){
	int row=4,col=4,i,j,k;
	for(i=1;i<=row;i++){
		for(k=i;k<=row-1;k++){
			printf(" ");
	}
		for(j=1;j<=i;j++){
			
			printf("%d",j);
		}
		printf("\n");
	}
}
