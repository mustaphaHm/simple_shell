#include "shell.h"
/**
 * _strlen - Returns length of a string.
 * @s: Pointer to string.
 * Return: Length of s.
 */
int _strlen(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to string to be conatenated upon.
 * @src: Pointer to string to append to dest.
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *destAddress;
	int destLen;

	destAddress = dest;
	destLen = _strlen(dest);
	destAddress = destAddress + destLen;
	while (*src != '\0')
	{
		*destAddress = *src;
		src++;
		destAddress++;
	}
	*destAddress = '\0';

	return (dest);
}
/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to First string.
 * @s2: Pointer to Second string.
 * Return: 0 if they are equal, Otherwise - positive value.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
