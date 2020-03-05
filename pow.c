#include<stdio.h>
int power(int b,int i){
    if(i==0){
        return 1;
    }
    else{
        return b*power(b,i-1);
    }
}
void main(){
    int po,base,index;
    printf("Enter base and index:");
    scanf("%d %d",&base,&index);
    po=power(base,index);
    printf("power is :%d",po);
}