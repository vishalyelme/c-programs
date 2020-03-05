#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *root=NULL;
int length(){
    struct node *temp;
    int count=0;
    temp=root;
    while (temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void atBegin(){
    struct node *temp;
    int value;
    printf("Enter the value to insert:");
    scanf("%d",&value);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=value;
    if(root==NULL){
        root=temp;
        printf("\nValue insertd\n");
    }
    else{
        struct node *p;
        p=root;
        temp->next=p;
        root=temp;
        printf("\nValue insertd\n");
    }
    
}
void atMid(){
    struct node *temp,*p,*r;
    int value,loc,i;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nInsert value to insert:");
    scanf("%d",&value);
    printf("\nEnter the location to insert:\n");
    scanf("%d",&loc);
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=value;
    if(root==NULL){
        root=temp;
    }
    else{
        int len;
        len=length();
        if(loc > len)
        {
            printf("\nCan not insert location larger than length\n");
        }
        else if(loc==1)
        {
            atBegin();
        }
        else
        {
            p=root;
            for ( i = 1; i < loc; i++)
            {
                r=p;
                p=p->next;
            }
            temp->next=r->next;
            p->prev=temp;
            r->next=temp;
            temp->prev=r;
            printf("\nInserted\n");
            
        }
        
    }
}
void atEnd(){
    struct node *temp,*p;
    int value;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nInsert value to insert:");
    scanf("%d",&value);
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=value;
    if(root==NULL){
        root=temp;
        printf("\nValue insertd\n");
    }
    else
    {
        p=root;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->prev=p;
        printf("\nInserted\n");
    }
}
void insert(){
    int ch;
    printf("\n1.At Begin\n2.At Mid\n3.At End\n4.length\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        atBegin();
        break;
    case 2:
        atMid();
        break;
    case 3:
        atEnd();
        break;
    default:
        printf("\nEnter correct choice\n");
        break;
    }
}
void del_at_begin(){
    struct node *temp;
    int value;
    if(root==NULL){
        printf("\nNothing to delete\n");
    }
    else if(length()==1)
    {
        value=root->data;
        root=NULL;
        printf("\n%d value deleted\n",value);
    }
    else
    {
    
        temp=root;
        value=temp->data;
        root=temp->next;
        temp->next=NULL;
        root->prev=NULL;
        free(temp);
        printf("\n%d value deleted\n",value);
    }
}


void del_at_mid(){
    struct node *p,*r;
    int i,index,value;
    if(root==NULL){
        printf("\nNothing to delete bro\n");
    }
    else
    {
        printf("\nEnter the location to delete\n");
        scanf("%d",&index);
        if(index==1){
            del_at_begin();
        }
        else if(index > length())
        {
            printf("\nCan not delete\n");
        }
        
        else{
                p=root;
                for(i=1;i<index;i++){
                        r=p;
                        p=p->next;
                }
                
                r->next=p->next;
                r->next->prev=r;
                value=p->data;
                p->next=NULL;
                free(p);
                
                printf("\n%d  deleted\n",value);

            }
        }
        
}

void del_at_end(){
    struct node *temp,*p;
    int value;
    if (root==NULL)
    {
        printf("\nThere is nothing to delete\n");
    }
    else
    {
        temp=root;
        while (temp->next!=NULL)
        {
            p=temp;
            temp=temp->next;
        }
        p->next=NULL;
        value=temp->data;
        temp->prev=NULL;
        free(temp);
        printf("\nvalue %d is deleted\n",value);        
    }
}

void delete(){
    int ch;
    printf("\n1.Delete at Begin\n2.Delete at Mid\n3.Delete at End\n");
    printf("Enter your choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        del_at_begin();
        break;
    case 2:
        del_at_mid();
        break;
    case 3:
        del_at_end();
        break;
    default:
    printf("\nEnter valid choice\n");
        break;
    }
}

// 
// void search(){

// }*/
void display(){
    struct node *temp;
    temp=root;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
void main(){
    int ch;
    int len;
    while (1)
    {
        printf("\n1.Insert\n2.Delete\n3.Length\n4.Search\n5.Display\n");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            
            len=length();
            printf("\nThe lenght of the list is : %d\n",len);
            
            break;
        case 4:
            printf("Call to function");
            //search();
            break;
        case 5:
            display();
            break;

        default:
            printf("\nEnter correct choice\n");
            break;
        }
    }
}