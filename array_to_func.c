#include<stdio.h>
void array(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",(*p)++);
    }
}
void main(){
    int arr[]={10,20,30,40,50};
    array(arr);
}