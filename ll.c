#include<stdio.h>
struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *p;
    struct node o1,o2;

    o1.data=10;
    o1.next=NULL;

    o2.data=20;
    o2.next=NULL;

    o1.next=&o2;
    p=&o1;
    printf("%d\n",p->data);
    printf("%d",p->next->data);
}