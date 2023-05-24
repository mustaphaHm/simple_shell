#include "shell.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print.
 */

void _puts(char *str)
{
	unsigned long i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 * Return: On success - 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *  _strdup - Duplicates string.
 *  @str: String to duplicate.
 *  Return: Pointer to duplicated string in allocated memory.
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	len++; /* add null terminator to length */
	duplicate_str = malloc(sizeof(char) * len);
	if (duplicate_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		duplicate_str[i] = str[i];
		i++;
	}
	return (duplicate_str);
}
