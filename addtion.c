#include<stdio.h>
void main()
{
	int arr[100],sum=0,i,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("The sum of array is : %d",sum);
	
}
