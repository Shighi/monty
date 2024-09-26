#include "monty.h"

/**
 * opcode_rotl - Rotates the stack to the top.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the bytecode file (unused).
 */
void opcode_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *last;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	current = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	last = current;
	while (last->next != NULL)
		last = last->next;

	current->next = NULL;
	last->next = current;
	current->prev = last;
}
