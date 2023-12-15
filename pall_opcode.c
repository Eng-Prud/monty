#include "monty.h"

/**
 * f_pall - Function that prints the stack
 * @head: stack head
 * @counter: no used
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *home;
	(void)counter;

	home = *head;
	if (home == NULL)
		return;
	while (home)
	{
		printf("%d\n", home->n);
		home = home->next;
	}
}
