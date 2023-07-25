#include "main.h"
/**
 * read_command - function
 *
 * @command: param
 * @size: param
 * Return: int
 */
int read_command(char *command, int size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{ /* End of file (Ctrl+D) */
			return (-1);
		}
		else
		{ /* Error reading input */
			perror("fgets");
			return (0);
		}
	}

	if (strcmp(command, "exit\n") == 0)
	{
		exit(0);
	}

	if (command[strlen(command) - 1] == '\n')
	{
		command[strlen(command) - 1] = '\0';
	}

	return (1);
}

