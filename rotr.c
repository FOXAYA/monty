#include "monty.h"

/**
  * fun_rotr- rotates the stack to the bottom
  * @head: stack head
  * @line_num: line number
  * Return: nothing
 */
void fun_rotr(stack_t **head, __attribute__((unused)) unsigned int line_num)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
