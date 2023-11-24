#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct Queue
{
  int items[MAX];
  int front;
  int rear;
} qe;

void createEmptyQueue(qe *q)
{
  q->front = -1;
  q->rear = -1;
}

int isFull(qe *q)
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

int isEmpty(qe *q)
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

void enQueue(qe *q, int value)
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

void deQueue(qe *q)
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

void printQueue(qe *q)
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
  qe *q = (qe *)malloc(sizeof(qe));
  createEmptyQueue(q);
  enQueue(q, 1);
  enQueue(q, 2);
  printQueue(q);

}