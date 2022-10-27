#include "insertion_sort.h"
#include "linked_list.h"
#include <stdio.h>


void sort(linked_list *llPtr){

	//Tjekker om listen er tom
	if(llPtr->head == NULL){
		printf("Listen er tom");
		return;
	}

	node_t *curr = llPtr->head->next;
	node_t *prev = llPtr->head;

	printf("\nNy liste:\n");

	//Kører hele listen igennem
	while(prev->next != NULL){

		//Tjekker om curr er mindre end prev, hvis ja skal curr flyttes
		if(curr->data < prev->data){

			printf("curr: %d, prev: %d\n", curr->data, prev->data);

			//Temporary prev bliver brugt til at vide hvor curr skal flyttes hen
			node_t *temp_prev = llPtr->head;

			//Looper indtil temp_prev->next er NULL
			while(temp_prev->next != NULL){

				//Tjekker om curr er mindre end head
				if(curr->data < llPtr->head->data){

					prev->next = curr->next;
					curr->next = llPtr->head;
					llPtr->head = curr;
					curr = prev->next;

					//Når curr er flyttet og er på sin rette plads, er der ikke nogle grund til at køre resten af loopet
					break;
				}

				//Hvis tjekker om det næste element i listen er mindre end curr
				if(curr->data > temp_prev->next->data){

					//Hvis ja rykker temp_prev et element op i listen
					temp_prev = temp_prev->next;
				}else{

					if(curr->next !=NULL){

						//Hvis det næste element er større end curr, rykkes curr på dens rette plads
						prev->next = curr->next;
						curr->next = temp_prev->next;
						temp_prev->next = curr;

						//curr bliver nu sat til det næste element i listen
						curr = prev->next;
						break;
					}else{

						prev->next = NULL;
						curr->next = temp_prev->next;
						temp_prev->next = curr;
						break;
					}

				}

			}

		}else{

			printf("curr: %d, prev: %d\n", curr->data, prev->data);

			//curr og prev rykker et element frem i listen
			curr = curr->next;
			prev = prev->next;

		}

	}

}
