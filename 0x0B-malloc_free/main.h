#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char);
char *create_array(unsigned int size, char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grind(int width, int height);
void free_grid(int **grid, int height);
char **argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
