#include "monty.h"

/**
 * fun_queue - prints the top
 * @head: stack head
 * @line_num: line number
 * Return: nothing
*/
void fun_queue(stack_t **head, unsigned int line_num)
{
	(void)head;
	(void)line_num;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: nothing
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
