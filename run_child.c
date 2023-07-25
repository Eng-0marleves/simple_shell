#include "main.h"

/**
 * run_child - function
 *
 * @command: parameter
 * Return: int
 */
int run_child(char *command)
{
	if (command == NULL)
	{
		return (-1);
	}

	execute_command(command);

	return (0);
}

