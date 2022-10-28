#include "list_queue.h"

void init_queue(queue *q)
{

	q->front = (malloc(sizeof(qnode)));
	q->rear = (malloc(sizeof(qnode)));

	//Sætter queue til at være tom
	q->rear = NULL;
	q->front = NULL;
	q->size = 0;

}

int empty(queue *q)
{

	return (q->size <= 0);

}

void enqueue(queue *q, int x)
{

}

int dequeue(queue *q)
{
  // Add your dequeue function
}
