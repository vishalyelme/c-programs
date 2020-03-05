#include<stdio.h>
void oper(int *p,int *q,int *x,int *y,int *z,float *w){
    *x=*p+*q;
    *y=*p-*q;
    *z=*p * *q;
    *w=*p / *q;
}
void main(){
    int a,b,add,sub,mul;
    float div;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    oper(&a,&b,&add,&sub,&mul,&div);
    printf("Addtion is :%d\n",add);
    printf("Subtraction is :%d\n",sub);
    printf("Multiplication is :%d\n",mul);
    printf("Division is :%f",div);
}