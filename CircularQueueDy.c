#include<stdio.h>
#include<stdlib.h>
# define max 2
struct que
{
    int front, rear, *que;  
};

struct que* createQue(){
    struct que *q = (struct que*)malloc(sizeof(struct que)); 
    q->que =(int*)malloc(max*sizeof(int));
     q->front = -1;
    q->rear = -1;
    return q;
}
void insert(int val ,struct que *q){
    if(q->rear == -1){
        q->front =0;
        q->que[++q->rear] =val;
        return;
    }
    if((q->rear+1)%max == q->front){
        printf("reallocating the memory");
        q->que = (int*)realloc(q->que,max*sizeof(int));
        printf("%d",q->que[q->front]);
    }
    
      q->rear =(q->rear+1)%max;
        q->que[q->rear] = val;
        //printf("%d",q->que[q->front]);
}
void display(struct que *q){
    if(q->front == -1){
        printf("its empty");
        return ;
    }
    if(q->front <= q->rear){
        for(int i = q->front ; i<=q->rear ;i++){
            printf("%d",q->que[i]);
        }}
        else{
            for(int i = q->front ; i< max;i++){
                 printf("%d",q->que[i]);
            }
            for(int i = 0 ; i<= q->rear ;i++){
                 printf("%d",q->que[i]);
            }
        }
}
int main(){
    struct que *q = createQue();
    insert(5 ,q);
    insert(2 ,q);
    insert(3 ,q);
    insert(4 ,q);
    insert(6 ,q);
    display(q);
}