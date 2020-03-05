#include<stdio.h>
void fibonacci(int firstno, int secondno,int no){
    int temp;
    if (no>0)
    {
        temp=secondno;
        secondno=firstno+secondno;
        printf("%d ",secondno);
        firstno=temp; 
        fibonacci(firstno,secondno,no-1);
    }
}
void main(){
    int num,num1=0,num2=1;
    printf("Enter the number:");
    scanf("%d",&num);
     printf("%d ",num1);
        printf("%d ",num2);
    fibonacci(num1,num2,num-2);
}