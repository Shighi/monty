Monty Interpreter
Overview
Monty is a simple stack-based scripting language that operates with bytecode files. The objective of this project is to implement an interpreter for Monty bytecodes, supporting multiple stack operations. This interpreter reads Monty bytecode files and executes the instructions accordingly.

Usage
./monty <file>
<file>: Path to a file containing Monty bytecodes.
Each instruction is executed in the order of appearance.
If the file can't be opened, contains an invalid instruction, or encounters other issues, the program exits with an error.

Compilation
Compile the project using:
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

Supported Opcodes
push <int>: Pushes an integer to the stack.
pall: Prints all values on the stack from the top.
pint: Prints the value at the top of the stack.
pop: Removes the top element of the stack.
swap: Swaps the top two elements of the stack.
add: Adds the top two elements of the stack.
nop: Does nothing.

Advanced Opcodes
sub, div, mul, mod: Performs arithmetic operations on the top elements of the stack.
pchar, pstr: Prints characters or strings from the stack based on ASCII values.
rotl, rotr: Rotates the stack.
stack, queue: Switches between stack (LIFO) and queue (FIFO) modes.
Data Structures
The interpreter relies on the following data structures:


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
Error Handling
If an invalid instruction is encountered, the program exits with the message:

L<line_number>: unknown instruction <opcode>
If the stack is empty when an operation like pint, pop, or pchar is performed, an error message is printed, and the program exits.
