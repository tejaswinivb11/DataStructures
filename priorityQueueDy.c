#include<stdio.h>
#include<stdlib.h>
int size;
struct queue{
    int *que,front,rear;
}*q;
typedef struct queue Queue;
// Queue* createQueue(){
//     Queue *q = (Queue)malloc(sizeof(Queue));
// }
void Enqueue(){
    int val;
    printf("enter the value to insert:");
    scanf("%d",&val);

    if(q->front == -1){
        q->front++;
        q->que[++q->rear] = val;
        return;
    }
    if(q->rear == size-1){
        printf("reallocating the memory");
        q->que = (int*)realloc(q->que,size*sizeof(int));
    }
    int i=q->rear; 
    while(i>=0 && val<q->que[i]){
        q->que[i+1] = q->que[i];
        i--;
    }
    q->que[++i] = val;
    q->rear++; 
}
void display(){
    if(q->front == -1){
        printf("its empty");
        return ;
    }
    for(int i = q->front; i<=q->rear; i++){
        printf("\t%d->",q->que[i]);
    }
    printf("its done");
}
int main(){
    q= (Queue*)malloc(sizeof(Queue));
    q->front=-1;
    q->rear = -1;
    printf("enter the size of array:");
    scanf("%d",&size);
    q->que = (int*)malloc(size *sizeof(int));
    for(int j = 0 ; j<10 ; j++){
    Enqueue();}
    display();
}