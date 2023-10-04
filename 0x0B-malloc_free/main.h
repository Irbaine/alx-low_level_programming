#ifndef _MAIN_H_
#define _MAIN_H_

/*--- Libraries ---*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*--- Function prototypes ---*/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *dup(char *a);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif /*-- main.h --*/
