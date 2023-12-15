#include "monty.h"

/**
* free_stack - Function that frees a doubly linked list
* @head: the head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxiliary;

	auxiliary = head;
	while (head)
	{
		auxiliary = head->next;
		free(head);
		head = auxiliary;
	}
}
