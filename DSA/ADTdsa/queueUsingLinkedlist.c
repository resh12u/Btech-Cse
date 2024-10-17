#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;

typedef struct Stack{
    node*front;
    node*rear;
}queue;

queue* inializequeue(){
   queue* Qu=(queue*)malloc(sizeof(queue));
   Qu->front=NULL;
   Qu->rear=NULL;

   return Qu;
}


node* createNewNode(int val){
   node*temp=(node*)malloc(sizeof(node));
   temp->data=val;
   temp->next=NULL;
   return temp;
}

void enqueue(queue* Qu, int val) {
    node* temp = createNewNode(val);
    
    if (Qu->rear == NULL) {  
        Qu->front = Qu->rear = temp;
        printf("Enqueued %d onto the queue\n", val);
        return;
    }
    
    Qu->rear->next = temp;  
    Qu->rear = temp;        
    printf("Enqueued %d onto the queue\n", val);
}

void dequeue(queue* Qu) {
    if (Qu->front == NULL) { 
        printf("Queue is empty, cannot dequeue\n");
        return;
    }

    node* temp = Qu->front;  
    Qu->front = Qu->front->next;  

    if (Qu->front == NULL) {  
        Qu->rear = NULL;
    }

    printf("Dequeued %d from the queue\n", temp->data);
    free(temp);  }

void display(queue* Qu) {
    if (Qu->front == NULL) { 
        printf("Queue is empty\n");
        return;
    }

    node* temp = Qu->front;
    while (temp != NULL) {
        printf("%d ", temp->data); 
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    queue* Qu = inializequeue();
    
    enqueue(Qu, 10);
    enqueue(Qu, 20);
    enqueue(Qu, 30);
    display(Qu);  
    
    dequeue(Qu);  
    display(Qu);  
    
    dequeue(Qu);
    dequeue(Qu);
    dequeue(Qu); 
    
    return 0;
}






