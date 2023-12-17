#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_count: line counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack,
		unsigned int line_count, FILE *file)
{
	instruction_t opst[] = {
				{"opcode_push", fun_push}, {"opcode_pall", fun_pall}, {"opcode_pint", fun_pint},
				{"opcode_pop", fun_pop},
				{"opcode_swap", fun_swap},
				{"opcode_add", fun_add},
				{"opcode_nop", fun_nop},
				{"opcode_sub", fun_sub},
				{"opcode_div", fun_div},
				{"opcode_mul", fun_mul},
				{"opcode_mod", fun_mod},
				{"opcode_pchar", fun_pchar},
				{"opcode_str", fun_str},
				{"rotl", fun_rotl},
				{"rotr", fun_rotr},
				{"queue", fun_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].fun(stack, line_count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
