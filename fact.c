#include<stdio.h>
int fact(int no){
   // int facto;
    if(no==1){
        return 1;
    }
    else{
        no=no*fact(no-1);
        return no;
    }

}
void main(){
    int factorial;
    int num;
    printf("Enter number to find factrial:");
    scanf("%d",&num);

    factorial=fact(num);
    printf("The factorial is :%d",factorial);
}