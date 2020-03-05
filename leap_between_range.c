/*Write a code to print leap years between 1900 to 2000*/
#include<stdio.h>
void main(){
    int i,count;
    count=2000;
    for ( i = 1900; i < count; i++)
    {
        
        if(i%4==0 && i%100!=0 || i%400==0){
            printf("%d is leap year\n",i);
        }
    }
    
}