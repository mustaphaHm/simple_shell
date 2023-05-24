#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;
void promptUser(void);
char *read_line(void);
int _strcmp(char *s1, char *s2);
unsigned int _checkSpaces(char *s);
char **_split(char *str);
void _exitShell(char **tokens, char *line);
int _execute(char **tokens, char *args);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

#endif
