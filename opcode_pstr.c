#include "monty.h"

/**
 * opcode_pstr - Prints the string starting from the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the bytecode file (unused).
 */
void opcode_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current && current->n > 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
