#include<stdio.h>
int* array(){

    int arr[]={1,2,3,4,5};

return arr;
}
void main(){
    int j,i,*p;
    p=array();
    for(i=0;i<5;i++){
        printf("%d ",*p);
        p=p+1;
    }
}
/*this program shows  warning: function returns address of local variable [-Wreturn-local-addr]
 return arr;
        ^~~*
        error because the scope of the array has ended as soon as the function ends
*/