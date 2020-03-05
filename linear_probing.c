#include<stdio.h>
int hash(int x){
    return x%5;
}
void add(int arr[]){
    int data,index;
    printf("Enter the number to insert:");
    scanf("%d",&data);
    index=hash(data);
    if(arr[index]==0){
        arr[index]=data;
        printf("\nNUMBER INSERTED\n");
    }
    else{
        printf("\nThe collision has occured\n");
        int i=index+1;
        while (arr[i]!=0)
        {
            i++; 
        }
        arr[i]=data;
        if (arr[i]!=0)
        {
            printf("\nThe NUMBER INSERTED\n");
        }
           
    }
}
void search(int arr[]){
    int num,index,found=-1;
    printf("Enter the number to search:");
    scanf("%d",&num);
    index=hash(num);
    if(num==arr[index]){
        //printf("\nFOUND at index :%d\n",index);
        found=index;
    }
    else{
        int i=index+1;
        while (arr[i]!=0)
        {
            if(num==arr[i]){
                found=i;
            }
            else{
                i++;
            }     
        }
    }
    if (found==-1)
    {
        printf("\nNumber not found\n");
    }
    else{
        printf("\nNUmber found at index location : %d\n",found);
    }

}
void display(int arr[]){
    int i;
    printf("\nThe array elements are:\n");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int i,ch;
    int arr[30]={0};
    // for(i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
    while (1)
    {
        printf("\n1.Add\n2.Search\n3.Display\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        add(arr);
        break;
    case 2:
        search(arr);
        break;
    case 3:
        display(arr);
        break;
    default:
        printf("\nEnter correct choice\n");
        break;
    }
    }
    
    
}