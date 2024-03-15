#include<stdio.h>
#include<stdlib.h>

int size;
struct queue{
    int *que,front,rear;
}*q;
typedef struct queue Queue;

void insFront(){
    int val;
    printf("enter the value to insert:");
    scanf("%d",&val);
    if(q->front == -1){
        q->front++;
        q->que[++q->rear] = val;
        return;
    }
    if(q->front > 0){
        q->que[--q->front] = val;
    }
    else{
        printf("can't insert at front");
    }

}

void delFront(){
    if(q->front == -1){
        printf("queue is empty");
        return;
    }
    int val =q->que[q->front++];
    printf("%d",val);
    if(q->front > q->rear){
        q->front=q->rear = -1;
    }
}

void insEnd(){
    int val;
    printf("enter the value to insert:");
    scanf("%d",&val);
    if(q->front == -1){
        q->front++;
        q->que[++q->rear] = val;
        return;
    }
    if(q->rear == size-1){
        printf("reallocating the memory\n");
        q->que = (int*)realloc(q->que,size*sizeof(int));
    }
    q->que[++q->rear] =val;
}
void delrear(){
    if(q->front == -1){
        printf("queue is empty");
        return;
    }
    int val = q->que[q->rear--];
    printf("%d",val);
    if(q->front > q->rear){
        q->front=q->rear = -1;
    }
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
   insFront();
   printf("\n delete at front\n");
   delFront();
    insFront();
     insFront();
     printf("\ninsert in end\n");
     insEnd();
     insEnd();
     insEnd();
     insEnd();
     printf("\ndelete in end\n");
     delrear();
     printf("\n displaying\n");
     display();
     }