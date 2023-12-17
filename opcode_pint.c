#include "monty.h"
/**
 * fun_pint - prints the top
 * @head: stack head
 * @line_num: line_number
 * Return: no return
*/
void fun_pint(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
