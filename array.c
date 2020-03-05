#include<stdio.h>
void main(){
	int arr[5],i,j;
	printf("Enter arrray elements:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray Elements are:\n");
	for(j=0;j<5;j++){
		printf("%d",arr[j]);
	}
}
