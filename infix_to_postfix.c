#include<stdio.h>
#include<string.h>
#define SIZE 10
struct stack{
    char stack_arr[SIZE];
    char post_arr[SIZE];
    int top;
}obj;
int is_operand(char var){
    if(var >= 'a' && var<='z' || var >='A' && var <= 'Z'){
        return 1;
    }
    else
    {
        return 0;
    }
}

char checkprecedence(char a, char b){
    char high_pre;
    if(a > b){
        high_pre=a;
    }
    else if (b > a)
    {
        high_pre=b;
    }
    //printf("the higher precedence is :%c ",high_pre);
    return high_pre;
    
}
void main(){
    char str[SIZE];
    obj.top=-1;
    
    printf("Enter the expression to convert:");
    scanf("%s",str);
    
    int i=0,startpop=0;
    while (str[i]!='\0')
    {
        int yes = is_operand(str[i]);
        if(yes==1){
            //printf("\nOperand\n");
            //obj.top++;
            //obj.post_arr[obj.top]=str[i];
            printf("%c ",str[i]);
        }
         
        else
        {
           // printf("\nnot operand\n");
            if(obj.top==-1){
                obj.top++;
                obj.stack_arr[obj.top]=str[i];
            }
            else{
                
                    char ch=checkprecedence(obj.stack_arr[obj.top],str[i]);
                    printf("\nHigher precedence is :%c\n",ch);
                    if(ch==str[i]){
                        obj.top++;
                        obj.stack_arr[obj.top]=str[i];
                    }
                    else if(ch==obj.stack_arr[obj.top]){
                        printf("%c ",obj.stack_arr[obj.top]);
                        obj.stack_arr[obj.top]=str[i];
                    }
                
            }
        }
        i++;
    }

   
       /* for ( i = 0; i <= obj.top; i++)
        {
            printf("%c ",obj.post_arr[i]);
        }
       /* for ( i = 0; i <= obj.top1; i++)
        {
            printf("%c ",obj.stack_arr[i]);
        }*/
    }        
    
    //printf("\nThe postfic elements are:");
    
    
    //printf("\nThe stack elements are:");
    
