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

	//Tjekker om queue er tomt
	if(q->size <= 0){
		return 1;
	}else{
		return 0;
	}

}

void enqueue(queue *q, int x)
{

	//den ny node bliver lavet til som en holder for den indkommende værdi
	qnode *newList = (malloc(sizeof(qnode)));

	//newList bliver tildelt værdien
	newList->data = x;

	//Hvis rear er NULL er listen tom
	if(q->rear == NULL){
		q->rear = newList;
		q->front = newList;
		//Laver en rear->next
		q->rear->next == NULL;
	}else{
		//Hvis listen ikke er tom

		//rear->next får den nye værdi og rear rækker en gang op
		q->rear->next = newList;
		q->rear = q->rear->next;
	}

	q->size += 1;

}

int dequeue(queue *q)
{

	//val får værdien af listen som kom ligger først i stacken
	int val = q->front->data;

	//front skal flyttes en gang frem, da den nuværende front er blevet poppet
	q->front = q->front->next;

	q->size -= 1;

	//Hvis størrelsen af køen er = 0, betyder det at køen er tom
	if(q->size == 0){
		//Derfor sættes rear = NULL, så den er klar til næste gang der skal pushes
		q->rear = NULL;
	}

	return val;


}
