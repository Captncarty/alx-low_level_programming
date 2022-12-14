#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *argstostr(int ac, char **av);
char **strtow(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);

#endif
