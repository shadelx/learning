#include <stdio.h>

#define SIZE 10

typedef struct circularQueue{
  int front;
  int rear;
  int items[SIZE];
}CircularQueue;

void createEmptyCircularQueue(CircularQueue* obj){
    obj->front = -1;
    obj->rear = -1;
}

int isFull(CircularQueue* obj){
    if((obj->front == 0 && obj->rear == SIZE -1) || (obj->front == obj->rear -1) ){
        return 1;
    }else{
        return 0;
    }
}

void enQueue(CircularQueue* obj, int item){
    if(!isFull(obj)){
        
    }else{
        printf("Queue is full\n");

    }
}


int main(){
    printf("hello, circular queue!\n");
    return 0;
}