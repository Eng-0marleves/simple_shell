#include "main.h"

/**
 * main - main entry of the program
 *
 * Return: int
 */
int main(void)
{
	char command[298];
	int ret, pid;

	while (1)
	{
		print_prompt();

		ret = read_command(command, sizeof(command));
		if (ret == -1)
		{ /* End of file */
			break;
		}
		else if (ret == 0)
		{ /* Error reading input */
			continue;
		}

		pid = fork();

		if (pid < 0)
		{
			perror("fork");
			exit(1);
		}
		else if (strcmp(command, "exit") == 0)
		{
			exit(0);
		}
		else if (pid == 0)
		{
			run_child(command);
		}
		else
		{
			wait_child(pid);
		}
	}

	return (0);
}
