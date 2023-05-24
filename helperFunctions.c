#include "shell.h"
/**
 * _checkSpaces - checks for white space.
 * @s: Pointer to string to check.
 * Return: integer.
 */
unsigned int _checkSpaces(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  == ' ' || s[i] == '\t' || s[i] == '\n')
			count++;
	}
	return (count);
}
/**
 * _split - splits a string into words.
 * @str: Pointer to string.
 * Return: Pointer to array of words.
 */
char **_split(char *str)
{
	int i = 0;
	const char delimeter[] = " \t\n";
	int space = _checkSpaces(str);
	char **tokens = malloc(sizeof(char *) * (space + 1));
	char *token;

	if (!tokens)
	{
		free(tokens);
		perror("sh: allocation error\n");
		exit(1);
	}

	token = strtok(str, delimeter);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}
	tokens[i] =  NULL;

	return (tokens);
}
/**
 * _exitShell - Exits the shell
 * and frees memory.
 * @tokens: Double pointer to words split from line.
 * @line: Pointer to string got using getLine().
 * Return: void.
 */
void _exitShell(char **tokens, char *line)
{
	int status;

	if (tokens[1] != NULL)
	{
		status = 10;
		if (status >= 0)
		{
			free(line);
			free(tokens);
			exit(status);
		}
		write(STDERR_FILENO, "Exit: illegal exit status: ", 28);
		write(STDERR_FILENO, tokens[1], 1);
		write(STDERR_FILENO, "\n", 1);
	}
	else
	{
		free(line);
		free(tokens);
		exit(0);
	}
}
