#include<stdio.h>
void main(){
	int size,i,j,sum;
	float mean;
	printf("Enter the array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements is the array:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum = sum+arr[i];
	}
	mean = sum/size;
	printf("Mean is %.1f",mean);
}
