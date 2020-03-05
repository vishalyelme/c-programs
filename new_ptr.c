#include<stdio.h>
void main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    printf("%u\n",arr);//base add
    printf("%u\n",arr+1);//
    printf("%u\n",arr+3);
    printf("%u\n",arr[0]+2);//firts row second ele
    printf("%u\n",arr[1]);
    printf("%d\n",*(*(arr+1)+2));
    printf("%d\n",*(arr+1)+2);
    /*
    a[2][2]
    *(*(arr+1)+2)-> gives value
    *(arr+1)+2
    */
}