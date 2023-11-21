#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate memory for array of char
 * @size: size of arrray
 * @c: initialized char
 * Description: allocate memory space for array of chars
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
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
}
