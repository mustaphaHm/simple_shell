#include "shell.h"
/**
 * promptUser - Print prompt to the user.
 * Return: Void.
 */
void promptUser(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);
	}
}
