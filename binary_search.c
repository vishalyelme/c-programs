#include<stdio.h>

void main(){
	int arr[100],n,i,l=0,h,search,mid,found=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter value to search:");
	scanf("%d",&search);
	h=n-1;
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	while(l<=h){
		mid=(l+h)/2;
		
		if(search == arr[mid]){
			found=1;
			break;
		}
		else if(search < arr[mid]){
			h= mid-1;
		}
		else if(search > arr[mid]){
			l= mid+1;
		}
	}
	
	if(found==1){
		printf("Number found");
	}
	else{
		printf("number not found");
	}
}
