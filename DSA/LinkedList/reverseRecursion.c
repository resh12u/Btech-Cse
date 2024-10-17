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

void rev(node*head){
	if (head==NULL)
	{
		return;
	} else{
		rev(head->next);
		printf("%d ",head->data);
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
    printf("The reversed LinkedList is: \n"); 
	rev(head);
		return 0;
}
