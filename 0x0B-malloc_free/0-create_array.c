#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate memory for array of char
 * @size: size of arrray
 * @c: initialized char
 * Description: allocate memory space for array of chars
 * Return: pointer to array
=======

/**
 * create_array - write a func that creates an array of char, and
 * init it with a specific char
 * @size: size of array
 * @c: input char
 * Return: NULL if size = 0 or ptr to the array or NULL if it fails
>>>>>>> 26e38ab24baa44c91341c58a034818c5a08140db
 */

char *create_array(unsigned int size, char c)
{
<<<<<<< HEAD
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
=======
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	*(p + i) = '\0';
	return (p);
>>>>>>> 26e38ab24baa44c91341c58a034818c5a08140db
}
