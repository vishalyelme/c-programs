#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
struct stack{
    int stack_a[100];
    int top;
};
void push(int var3, struct stack *s){   
    s->top++;
    s->stack_a[s->top]=var3;
}
int pop(struct stack *s){
    if(s->top==-1){
        printf("The stack is empty");
        return -1;
    }
    int value;
    value=s->stack_a[s->top];
    s->top--;
    return value;
}
void evaluation(char *p, struct stack *s){
    char ch;
    int no_to,val1=0,val2=0;
    if(isdigit(ch)==1){
        
        no_to = ch - '0';
        push(no_to,s);
    }
    else
    {
        if(ch=='+'){
            val2=pop(s);
            if (val2==-1)
            {
                printf("The stack is empty");
            }
            else{
                val1 = val1 + val2;
                printf(" evaluated value is :%d",val1);
                push(val1,s);
            }   
        }
        else if(ch=='-')
        {
            val2=pop(s);
            if (val2==-1)
            {
                printf("The stack is empty");
            }
            else{
                val1 = val1 - val2;
                printf(" evaluated value is :%d",val1);
                push(val1,s);
            }   
        }
        else if(ch=='*')
        {
            val2=pop(s);
            if (val2==-1)
            {
                printf("The stack is empty");
            }
            else{
                val1 = val1 * val2;
                printf(" evaluated value is :%d",val1);
                push(val1,s);
            }   
        }
        else if(ch=='/')
        {
            val2=pop(s);
            if (val2==-1)
            {
                printf("The stack is empty");
            }
            else{
                val1 = val1 / val2;
                printf(" evaluated value is :%d",val1);
                push(val1,s);
            }   
        }
        
        
        
    }
    
    
    
}
void main(){
    struct stack s;
    char exp[100];
    printf("Enter expression:");
    scanf("%s",exp);
    evaluation(exp,&s);
}