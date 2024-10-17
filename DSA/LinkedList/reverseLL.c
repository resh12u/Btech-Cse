#include <stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;

}node;

node *NewNode(int val){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=val;
	temp->next=NULL;
	return temp;
}

void Insert(node **head,int val){
	node*temp=NewNode(val);
	if(*head==NULL){
		*head=temp;
	} else{
		temp->next=*head;
		*head=temp;
	}
}

void reverse(node **head){
	if(*head==NULL){
		printf("First enter valid input.\n");
		return;
	} else if((*head)->next==NULL){

		*head=*head;
	}else{
		node *tail1= *head;
		 node *tail2 = *head;
		tail1=tail1->next;

		while (tail1->next!=NULL){
			node *ptr=tail1->next;
			tail1->next=tail2;
			tail2=tail1;
			tail1=ptr;
		}
		tail1->next=tail2;
		(*head)->next=NULL;
		*head=tail1;
		
	}
}

void display(node*head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
}

int main(){
	node *head=NULL;
	int n,val;
	scanf("%d", &n);             
	printf("Input number is %d.\n", n);
	printf("Enter the values you wants to print:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&val);

		Insert(&head,val);
	}   

	display(head); 
	reverse(&head);
	printf("The reversed LinkedList is: \n");
	display(head);
}
