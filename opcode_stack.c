#include "monty.h"

/**
 * opcode_stack - Switches to stack mode (LIFO).
 * @stack: Double pointer to the stack (unused).
 * @line_number: Line number of the bytecode file (unused).
 */
void opcode_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global_mode = STACK_MODE;
}
