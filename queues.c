#include "monty.h"

/**
 * f_queue - Function that prints the top
 * @head: stack head
 * @counter: line_number
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Function that add node to the tail stack
 * @n: new_value
 * @head: head of the stack
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *auxiliary;

	auxiliary = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auxiliary)
	{
		while (auxiliary->next)
			auxiliary = auxiliary->next;
	}
	if (!auxiliary)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auxiliary->next = new_node;
		new_node->prev = auxiliary;
	}
}
