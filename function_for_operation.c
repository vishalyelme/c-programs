/*write a function to do given operation on the two operands specified*/
#include<stdio.h>
float operate(float oprd1, float oprd2, char oprn[]){
    if(oprn=="add"){
        return oprd1+oprd2;
    }
    if(oprn=="sub"){
        return oprd1-oprd2;
    }
    if(oprn=="mul"){
        return oprd1*oprd2;
    }
    if(oprn=="div"){
        return oprd1/oprd2;
    }
}
void main(){
    float num1,num2,opr;
    char ch[10]="add";
    printf("Enter two numbers:");
    scanf("%f %f",&num1,&num2);
    
    opr=operate(num1,num2,ch);
    printf("The answer is %f",opr);

}