#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

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
int fileExists(char *s);
int _putchar(char c);
char *pathBuilder(char **tokens);
int _execPath(char **tokens, char *path, char *args);
void _printenv(void);
int _isBuiltIn(char *str);
int _execBuiltIn(char **tokens);
void _puts(char *str);
int _setenv(char *var_name, char *var_value);
char *var_build(char *var_name, char *var_value);
int _unsetenv(char *var_name);
char *_strdup(char *str);
void ctrlc(int signum);
int c_atoi(char *s);
#endif
