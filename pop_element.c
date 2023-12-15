#include "monty.h"
/**
 * f_pop - Function that removes the top
 * @head: stack head
 * @counter: line_number
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *hotel;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hotel = *head;
	*head = hotel->next;
	free(hotel);
}
