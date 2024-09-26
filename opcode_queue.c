#include "monty.h"

/**
 * opcode_queue - Switches to queue mode (FIFO).
 * @stack: Double pointer to the stack (unused).
 * @line_number: Line number of the bytecode file (unused).
 */
void opcode_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global_mode = QUEUE_MODE;
}
