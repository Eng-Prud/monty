#include "monty.h"

/**
 * f_mul - Function that multiplies top two elements of the stack
 * @head: the stack head
 * @counter: line_number
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *hotel;
	int len = 0, auxiliary;

	hotel = *head;
	while (hotel)
	{
		hotel = hotel->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hotel = *head;
	auxiliary = hotel->next->n * hotel->n;
	hotel->next->n = auxiliary;
	*head = hotel->next;
	free(hotel);
}
