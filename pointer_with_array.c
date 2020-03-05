#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    //int *ptr=&arr[0];
    int *ptr=arr;
    int i;
    for(i=0;i<5;i++){
        printf("%d\t %u\n",*ptr,ptr);
        ptr=ptr+1;
    }


}