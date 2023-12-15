#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
char *create_array(unsigned int size, char c);
=======

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);
char **strtow(char *str);

int word_len(char *str);
int count_words(char *str);

>>>>>>> 26e38ab24baa44c91341c58a034818c5a08140db
#endif
