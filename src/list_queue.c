#include "list_queue.h"

void init_queue(queue *q)
{

	q->front = (malloc(sizeof(qnode)));
	q->rear = (malloc(sizeof(qnode)));

	//Sætter queue til at være tom
	q->size = 0;
	q->front = NULL;
	q->rear = NULL;

}

int empty(queue *q)
{
  // Add your empty function  
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
}

int dequeue(queue *q)
{
  // Add your dequeue function
}
