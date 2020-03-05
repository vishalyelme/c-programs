#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    printf("\nThe values before swap are %d and %d ",*x,*y);
    temp = *x;
    *x=*y;
    *y=temp;
    printf("\nThe values after swap are %d and %d \n",*x,*y);
}
void main(){
    int a=10,b=20;
    printf("\nThe values before swap are %d and %d ",a,b);
    swap(&a,&b);
    printf("\nThe values after swap are %d and %d \n",a,b);
}