#include "shell.h"
/**
 * read_line - get typed line by user from stout as a string.
 * Return: Pointer to the line(string).
 */
char *read_line(void)
{
	char *line =  NULL;
	size_t size = 0;
	ssize_t numOfchars = 0;

	numOfchars = getline(&line, &size, stdin);

	if (numOfchars == EOF)
	{
		free(line);
		exit(0);
	}
	if (line == NULL)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(line);
		exit(-1);
	}

	return (line);
}
