#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
=======
#include "main.h"

>>>>>>> 26e38ab24baa44c91341c58a034818c5a08140db
int _putchar(char c)
{
	return (write(1, &c, 1));
}
