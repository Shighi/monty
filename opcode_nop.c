#include "monty.h"

/**
 * opcode_nop - Does nothing (no operation).
 * @stack: Double pointer to the stack (unused).
 * @line_number: Line number in the bytecode file (unused).
 */
void opcode_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
