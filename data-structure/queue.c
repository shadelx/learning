#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct queue
{
  int items[MAX];
  int front;
  int rear;
} Queue;

void createEmptyQueue(Queue *q)
{
  q->front = -1;
  q->rear = -1;
}

int isFull(Queue *q)
{
  if ((q->rear == MAX - 1) && (q->front == 0))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isEmpty(Queue *q)
{
  if ((q->rear == -1))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void enQueue(Queue *q, int value)
{
  if (isFull(q))
  {
    printf("\nQueue is Full!!");
  }
  else
  {

    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
  }
}

void deQueue(Queue *q)
{
  if (isEmpty(q))
  {
    printf("\nQueue is Empty!!");
  }
  else
  {
    printf("\nDeleted : %d", q->items[q->front]);
    q->front++;
    if (q->front > q->rear)
      q->front = q->rear = -1;
  }
}

void printQueue(Queue *q)
{
  if(isEmpty(q))
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = q->front; i <= q->rear; i++)
      printf("%d  ", q->items[i]);
  }

  printf("\n");
}

int main()
{
  Queue *q = (Queue *)malloc(sizeof(Queue));
  createEmptyQueue(q);
  enQueue(q, 1);
  enQueue(q, 2);
  printQueue(q);

}