#include "monty.h"

/**
 * opcode_push - Pushes an element to the stack or queue.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the bytecode file.
 */
void opcode_push(stack_t **stack, unsigned int line_number)
{
	char *value = strtok(NULL, " \n\t");

	if (!is_number(value))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (global_mode == STACK_MODE)
		add_node(stack, atoi(value));
	else
		add_node_end(stack, atoi(value));
}
