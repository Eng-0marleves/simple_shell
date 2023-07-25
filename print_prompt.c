#include "main.h"

/**
 * print_prompt - function
 *
 */

void print_prompt(void)
{
	if (isatty(STDIN_FILENO))
		printf("#cisfun$ ");
}
