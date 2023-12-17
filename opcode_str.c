#include "monty.h"

/**
 * fun_str - prints the string starting at the top of the stack,
 * followed by a new
 * @head: head od stack
 * @line_num: line number
 * Return: nothing
*/
void fun_str(stack_t **head, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
