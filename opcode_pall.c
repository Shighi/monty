#include "monty.h"

/**
 * opcode_pall - Prints all values on the stack or queue.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the bytecode file (unused).
 */
void opcode_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
