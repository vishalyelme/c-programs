#include<stdio.h>
struct stack{
    char stack_arr[100];
    int top;
};

int precedence(char var){
    if(var=='+' || var=='-'){
        return 1;
    }
    if (var =='*' || var=='/')
    {
        return 2;
    }
    
}

void push(char var2 , struct stack *s){
    s->top++;
    s->stack_arr[s->top]=var2;
}
char pop(struct stack *s){
    char var3;
    if(s->top==-1){
        printf("\nThe stack is empty\n");
    }
    else
    {
        var3 = s->stack_arr[s->top];
        s->top--;
    }  
    return var3;
}
void infix_to_postfix(char *p, struct stack *s){
    char ch,var1;
    char output[100];
    int i=0;
    while (*p != '\0')
    {
        ch=*p;
        if(ch >= 'a' && ch<='z' || ch >='A' && ch <= 'Z'){
            output[i]=ch;
            i++;
        }
        else
        {
            //if stack is empty directly push
            if(s->top==-1){
                push(ch,s);
            }
            else
            {
                if (precedence(ch) > precedence(s->stack_arr[s->top]))
                {
                    push(ch,s);
                }
                else
                {
                    var1=pop(s);
                    output[i]=var1;
                    i++;
                    push(ch,s);
                }
            }
        }
        p++;
    }
    while (s->top >=0)
    {
        output[i]=pop(s);
        i++;
      //  s->top--;
    }
    
    int j;
    for ( j = 0; j < i; j++)
    {
        printf("%c ",output[j]);
    }
    
  // printf("The converted expression is : %s",output);
  /*  for ( j = 0; j <= s->top; j++)
    {
        printf("%c ",s->stack_arr[j]);
    }
    */
    
    
}
void main(){
    struct stack s;
    s.top=-1;
    char exp[100];
    printf("Enter the string:");
    scanf("%s",exp);

    infix_to_postfix(exp,&s);
}