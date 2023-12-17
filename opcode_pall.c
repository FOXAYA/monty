#include "monty.h"

/**
 * fun_pall - prints all values on stack
 * @head: pointer to the top of the stack
 * @line_num: no used
 * Return: no return
*/
void fun_pall(stack_t **head, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
