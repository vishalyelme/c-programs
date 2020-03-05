#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *root=NULL;
int length(){
    int count=0;
    struct node *temp;
    temp=root;
     while (temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void atBegin(){
    int value;
    struct node *temp;
    struct node *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert at begin:");
    scanf("%d",&value);
    temp->data=value;
    temp->next=NULL;
    if(root==NULL){
        root=temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }
}
void atMid(){
    int value,i,index;
    struct node *temp;
    struct node *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert :");
    scanf("%d",&value);
    temp->data=value;
    temp->next=NULL;
    if(root==NULL){
        root=temp;
        printf("Inserted at begin");
    }
    else
    {
        printf("\nEnter the location to insert:\n");
        scanf("%d",&index);
        if(index > length()){   
            p=root;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=temp;
        }
        else if(index==1){
            temp->next=root;
            root=temp;
            printf("\nInserted at location 1\n");
        }
        else
        {
            p=root;
        struct node *r;
        for(i=1;i<index;i++){
            r=p;
            p=p->next;
        }
       temp->next=p;
       r->next=temp;
        }             
    } 
}
void atEnd(){
    int value;
    struct node *temp;
    struct node *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert at End:");
    scanf("%d",&value);
    temp->data=value;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        p=root;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
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
        root=temp->next;
        value=temp->data;
        free(temp);
        printf("\n%d value deleted\n",value);
    }
}


void del_at_mid(){
    struct node *p,*r,*temp;
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
                temp=p;
                r->next=temp->next;
                
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


void display(){
    struct node *temp;
    if(root==NULL){
        printf("\nNothing to display insert some data\n");
    }
    else
    {
        temp=root;
        while (temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }        
    }
    
    
}
void search(){
    struct node *temp;
    int val,i=1,ind=0;
    if(root==NULL){
        printf("\nNothing to search\n");
    }
    else
    {
        printf("Enter the value to search:");
        scanf("%d",&val);
        temp=root;
        while (temp!=NULL)
        {
            
            if(temp->data==val){
                ind=i;
                break;
            }
            else
            {
                i++;
            }
            temp=temp->next;
        }
        if(ind==0){
            printf("\nElement not found\n");
        }
        else{
            printf("\nElement found at location : %d\n",ind);
        }
        
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
            search();
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