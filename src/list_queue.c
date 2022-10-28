#include "list_queue.h"
#include <stdio.h>
#include <assert.h>

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

	if(q->size <= 0){
		return 1;
	}else{
		return 0;
	}

}

void enqueue(queue *q, int x)
{

	q->front = (malloc(sizeof(qnode)));
	q->rear = (malloc(sizeof(qnode)));

	if(q->size == 0){
		q->front->data = x;
		q->size++;
	}else{


		q->size++;
	}

}

int dequeue(queue *q)
{

	q->front = (malloc(sizeof(qnode)));
	q->rear = (malloc(sizeof(qnode)));

	qnode *fifoData;

	fifoData->data = q->front->data;

	if(q->rear->next != NULL){
		qnode *temp = q->front->next;
		free(q->front);
		q->front = temp;
		q->size--;
	}else{
		fifoData->data = q->rear->data;
		q->size--;
	}

	return fifoData->data;

}
