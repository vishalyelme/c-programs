#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *q=(struct node *)malloc(sizeof(struct node));

    p->data=10;
    p->next=q;

    q->data=20;
    q->next=NULL;


    printf("%d\n",p->data);
    printf("%d",p->next->data);
}