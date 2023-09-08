
File metadata and controls

Code

Blame
21 lines (20 loc) · 258 Bytes
#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

