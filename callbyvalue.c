#include<stdio.h>
void swap(int x, int y){
    int temp;
    printf("Value before swap are %d and %d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("Value after swap are %d and %d",x,y);
}
void main(){
    int a=10,b=20;
    printf("Values befor swap are: %d and %d",a,b);
    swap(a,b);
    printf("Values befor swap are: %d and %d",a,b);
}