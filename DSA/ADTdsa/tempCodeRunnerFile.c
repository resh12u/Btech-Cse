#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct queue
{
    int capacity;
    int front;
    int rear;
    int* arr;
}queue;

queue *createqueue(int cap){
    queue* Qu=(queue*)malloc(sizeof(queue));
    Qu->capacity = cap;
    Qu->front=-1;
    Qu->rear=-1;
    Qu->arr=(int *)malloc(sizeof(int)*Qu->capacity);
    return Qu;

}

void enqueue(queue* Qu,int data){
    if (Qu->rear>=Qu->capacity-1){
        printf("queue is full\n");
        return;

    }
    Qu->arr[++(Qu->rear)]=data;
    if(Qu->rear==0){
        Qu->front=0;
    }
   
}

void dequeue(queue*Qu){
    if(Qu->front > Qu->rear){
        printf("queue is empty\n");
    }
    int v=Qu->arr[(Qu->front)++];
   printf("dequeue made %d\n",v);
}

void display(queue*Qu){
    if(Qu->front==-1){
        printf("empty\n");
        return;
    }
    int i=Qu->front;
    while (i!=Qu->rear+1)
    {
        printf("%d ",Qu->arr[i]);
        i++;
    }
    printf("\n");
    

};

int main()
{
    queue*Qu=createqueue(5);
    enqueue(Qu,10);
    enqueue(Qu,11);
    enqueue(Qu,12);
    enqueue(Qu,13);
    enqueue(Qu,14);
    enqueue(Qu,15);

    display(Qu);
    dequeue(Qu);
    display(Qu);
}

