#include "monty.h"
/**
 * fun_pop - prints the top
 * @head: pointer to the top of the stack
 * @line_num: line_number
 * Return: no return
*/
void fun_pop(stack_t **head, unsigned int line_num)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
