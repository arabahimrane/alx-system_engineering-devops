#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * infinite_while- For every zombie process created, it displays
 * Return: Zero
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main- a C program that creates 5 zombie processes.
 * Return: return 0
 */
int main(void)
{
	unsigned int i = 0;
	pid_t pid;

	while (i < 5)
	{
		pid = fork();
		if (pid <= 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", pid);
		i++;
	}
	infinite_while();
	return (0);
}
