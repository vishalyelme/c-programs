#include<stdio.h>
void main(){
	int arr[100],i,n,max;
	printf("Enter the sizr of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]> max){
			max =arr[i];
		}
	}
	printf("The maximum number is : %d",max);
}
