#include<stdio.h>
void factorial(int *ptr){
    int i,n=*ptr;
    for(i=n-1;i>=1;i--){
        *ptr=*ptr*i;
    }
}
void main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    factorial(&num);

    printf("The factorial of the number is: %d",num);
}