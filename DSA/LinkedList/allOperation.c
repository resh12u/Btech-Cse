#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int info;
    struct node* next;

}node;

node *NewNode(int val){
    node *temp=(node*)malloc(sizeof(node));
    temp->info=val;
    temp->next=NULL;
    return temp;
}


void InsertAtFirst(node **head,int val){
    node *temp=NewNode(val);
    if(*head==NULL){
        *head=temp;
    } else{
        temp->next=*head;
        *head=temp;
    }
}

void InsertAtLast(node **head,int val){
    node *temp=NewNode(val);
    if(*head==NULL){
        *head=temp;
    } else{
        node *tail=*head;
       while (tail->next!=NULL)
       {
        tail=tail->next;
       }
       tail->next=temp;
       
    }
} 

void InsertInBew(node **head,int val,int info1){
    node *temp=NewNode(val);
    if(*head==NULL){
        *head=temp;
    } else{
        node *tail=*head;
       while (tail->info!=info1)
       {
        tail=tail->next;
       }
       temp->next=tail->next;
       tail->next=temp;
       
    }
} 

void DeletInBew(node **head,int info1){
  node *ptr=NULL;
    if(*head==NULL){
        printf("L.L is empty\n");
    } else{
        node *tail=*head;
       while (tail->info!=info1)
       {
        ptr=tail;

        tail=tail->next;
       }

       ptr->next=tail->next;
       free(tail);

       
    }
} 

void display(node*head){
    while (head!=NULL)
    {
        printf("%d ",head->info);
        head=head->next;
    }
    printf("\n");
    

}

int main ()
{   
    node*head=NULL;
    int n,val,info;
    printf("Enter 1 to add and -1 to delete from first:\n");
    printf("Enter 2 to add and -2 to delete from Last:\n");
    printf("Enter 3 to add and -3 to delete from Between:\n");
    printf("Enter 4 to display:\n");
    printf("Enter 5 to exit:\n");

    while (1)
    {
        scanf("%d",&n);
        switch (n)
        {
        case 1: printf("Enter the value to insert:\n");
        scanf("%d",&val);
        InsertAtFirst(&head,val);
            break;
        case 2:  printf("Enter the value to insert:\n");
        scanf("%d",&val);
        InsertAtLast(&head,val);
            break;    
        case 3:  printf("Enter the value to insert:\n");
        scanf("%d",&val);
        printf("Enter the value after which you wnant to insert:\n");
        scanf("%d",&info);
        InsertInBew(&head,val,info);
            break;
        case 4: display(head);
            break;
        case -3: printf("Enter the value which you want to delete:\n");
        scanf("%d",&info);
          DeletInBew(&head,info);
            break;       
        default: printf("Insert Valid input:\n");
            break;
        }
    }
    





    return 0;
}