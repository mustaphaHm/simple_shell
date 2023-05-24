#include "shell.h"
/**
 * _execute - custom execve that executes a file.
 * @tokens: Split string into tokens from stdin.
 * @args: Program arguments.
 * Return: 0 if success. otherwise - 1.
 */
int _execute(char **tokens, char *args)
{
	char *err1, *err2, *err3;
	pid_t child_pid;
	int status;

	/* handle commands like /bin/ls */
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			err1 = _strcat(*tokens, ": No such file or directory\n");
			err2 = _strcat(args, ":");
			err3 = _strcat(err2, err1);
			write(STDERR_FILENO, err3, _strlen(err3));
			free(tokens);
			exit(EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
	wait(&status);
	return (0);
}
