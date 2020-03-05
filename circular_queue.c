#include<stdio.h>
struct circular_queue
{
    int arr[5];
    int front,rear;
}obj;

void enqueue(){
    int data;
    if(obj.rear>=5 || obj.rear==obj.front-1){
        printf("\nThe queue is full\n");
    }
    else
    {   
        printf("\nEnter the value to insert:");
        scanf("%d",&data);
        if(obj.front==-1 && obj.rear==-1){
            obj.front=0;
            obj.rear=0;
            obj.arr[obj.rear]=data;
        }
        else if(obj.rear>=4 && obj.front != 0){
            obj.rear=0;
            obj.arr[obj.rear]=data;
        }
        else{
            obj.rear++;
            obj.arr[obj.rear]=data;
        }
    }
    
}

int dequeue(){
    int data;
    if(obj.front==-1 && obj.rear==-1){
        return 0;
    }
    else
    {
        if(obj.front==obj.rear){
            data=obj.arr[obj.front];
            obj.front=-1;
            obj.rear=-1;
        }
        else if(obj.front == 4)
        {
            data= obj.arr[obj.front];
            obj.front=0;
        }
        else
        {
            data=obj.arr[obj.front];
            obj.front++;   
        }
    }
    return data;
}

void display(){
    int i;
    for(i=0;i<=obj.rear;i++){
        printf("%d ",obj.arr[i]);
    }
   
}
void main(){
    struct circular_queue obj;
    obj.front=-1;
    obj.rear=-1;

    int ch,val;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            val=dequeue();
            if(val==0){
                printf("\nThe queue is empty\n");
            }
            else
            {
                printf("\nDequed element is : %d\n",val);
            }
            break;
        case 3:
            display();
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    }
    
}