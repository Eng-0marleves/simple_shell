#include "main.h"

/**
 * execute_command - function
 *
 * @command: command
 */
void execute_command(char *command)
{
	system(command);
	exit(0);
}
