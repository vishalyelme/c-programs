#include<stdio.h>
#define N 5
struct que{
    int queue[N];
    int front,rear;
}s;


void enqueue(){
    int val;
    
    if((s.rear+1)%N == s.front){
        printf("\nThe queue is full\n");
    }
    else if(s.front==-1 && s.rear==-1){
        printf("\nEnter the value to insert:");
    scanf("%d",&val);
        s.front=0;
        s.rear=0;
        s.queue[s.rear]=val;
    }
    else{
        printf("\nEnter the value to insert:");
    scanf("%d",&val);
        s.rear=(s.rear + 1)%N;
        s.queue[s.rear]=val;
    }
}


int dequeue(){
    int val;
    if(s.front==-1 && s.rear==-1){
        
        return -1;
    }
    else if(s.front==s.rear){
        val= s.queue[s.front];
        s.front=s.rear=-1;
        return val;
    }
    else{
        val = s.queue[s.front];
        s.front=(s.front+1)%N;
        return val;
    }
    
}
void display(){
    int i= s.front;
    if(s.front==-1 && s.rear==-1){
        printf("\nThe queue is empty\n");
    }
    else
    {
        
        printf("\nThe queue elements are:");
        while (i != s.rear)
        {
            printf("%d ",s.queue[i]);
            i=(i+1)%N;
        }
        printf("%d ",s.queue[s.rear]);  
    }
    
}

int length(){
    int i=s.front,count=0;
    while (i!=s.rear)
    {
     i=(i+1)%N;
     count++;   
    }
    return count+1;

}
void main(){
    s.front=-1;
    s.rear=-1;
    int n;
    int ch;
    while (1)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.length\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        n=dequeue();
        if (n==-1)
        {
            printf("\nThe queue is empty\n");
        }
        else
        {
            printf("\nThe dequeued element is : %d\n",n);
        }
        break;
    case 3:
        display();
        break;
    case 4:
        printf("\nThe length of the queue is %d\n",length());
        break;
    default:
        printf("\nEnter correct choice!!!\n");
        break;
    }
    }
    
    
}