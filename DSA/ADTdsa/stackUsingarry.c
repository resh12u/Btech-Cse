#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Stack
{
    int capacity;
    int top;
    int* arr;
}stack;

stack *createStack(int cap){
    stack* st=(stack*)malloc(sizeof(stack));
    st->capacity = cap;
    st->top=-1;
    st->arr=(int *)malloc(sizeof(int)*st->capacity);
    return st;

}

void push(stack* st,int data){
    if (st->top>=st->capacity-1){
        printf("Stack is full\n");
        return;

    }
    st->arr[++(st->top)]=data;
   
}

void pop(stack*st){
    if(st->top==-1){
        printf("STack is empaty\n");
    }
    int v=st->arr[(st->top)--];
   printf("pop made %d\n",v);
}

void display(stack*st){
    if(st->top==-1){
        printf("empty\n");
        return;
    }
    int i=st->top;
    while (i!=-1)
    {
        printf("%d ",st->arr[i]);
        i--;
    }
    printf("\n");
    

};

int main()
{
    stack*st=createStack(5);
    push(st,10);
    push(st,11);
    push(st,12);
    push(st,13);
    push(st,14);
    push(st,15);

    display(st);
    pop(st);
    display(st);
}

