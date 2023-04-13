#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct Queue{
  int items[MAX];
  int front;
  int rear;
}qe;

void createEmptyQueue(qe *q){
    q->front = -1;
    q->rear = -1;

}

int isFull(qe *q){
  if((q->rear == MAX-1) && (q->front == 0) ){
    return 1;
  }else{
    return 0;
  }
}

int isEmpty(qe * q){
    if((q->rear ==-1) && (q->front ==-1)){
        return 1;
    }else {
        return 0;
    }
}

int enQueue(qe *q, int value){
    if(q->front ==-1)
        q->front = 0
}
int main(){

}