#include<stdio.h>
void add(int *x, int *y, int *z){
    *z=*x+*y;
}
void main(){
    int a,b,c=0;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    //printf("Addtion before call is :%d",a+);
    add(&a,&b,&c);
    printf("Addtion after call is :%d",c);
}