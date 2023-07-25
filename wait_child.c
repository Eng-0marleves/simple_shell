#include "main.h"

/**
 * wait_child - function
 *
 * @pid: process ID
 * Return: int
 */
int wait_child(int pid)
{
	int status;
	struct sigaction sa;

	sa.sa_handler = alarm_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;

	alarm(5);
	sigaction(SIGALRM, &sa, NULL);

	if (waitpid(pid, &status, 0) == -1)
	{
		perror("waitpid");
		return (-1);
	}

	alarm(0);

	return (status);
}

