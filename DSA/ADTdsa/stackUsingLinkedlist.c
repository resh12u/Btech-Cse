#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;

typedef struct Stack{
    node*top;
}stack;

stack* inializestack(){
   stack*st=(stack*)malloc(sizeof(stack));
   st->top=NULL;
   return st;
}


node* createNewNode(int val){
   node*temp=(node*)malloc(sizeof(node));
   temp->data=val;
   temp->next=NULL;
   return temp;
}

void push(stack* st, int val) {
    node *temp = createNewNode(val);
    temp->next = st->top; 
    st->top = temp;       
    printf("Pushed %d onto the stack\n", val);
}


void pop(stack* st) {
    if (st->top == NULL) {
        printf("Stack is empty, cannot pop\n");
        return;
    }
    node* temp = st->top;
    st->top = st->top->next; 
    printf("Popped %d from the stack\n", temp->data);
    free(temp); 
}


void display(stack* st) {
    if (st->top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    node* temp = st->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    stack* st = inializestack();
    
    push(st, 10);
    push(st, 20);
    push(st, 30);
    display(st);
    
    pop(st);
    display(st);
    
    pop(st);
    pop(st);
    pop(st); 
    return 0;
}








