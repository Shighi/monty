#include "monty.h"

/**
 * opcode_sub - Subtracts the top element from the second top element.
 * @stack: Double pointer to the stack (head).
 * @line_number: Line number of the bytecode file (counter).
 */
void opcode_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int diff, nodes;

	temp = *stack;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	diff = temp->next->n - temp->n;
	temp->next->n = diff;
	*stack = temp->next;
	free(temp);
}
