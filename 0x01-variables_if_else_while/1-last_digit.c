#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Lastdigit;
 * greater than or less than 5, or is zero
 * Return 0;
 */

int main(void)
{
	int n;
	int Lastdigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Lastdigit = n % 10;
	if (Lastdigit > 5)
	{
	printf ("%d\n and is greater than 5" , Lastdigit);
		}
	else if (Lastdigit == 0)
		{
	printf("%d\n and is 0" , Lastdigit);
		}
	else (Lastdigit < 6)
	{
	printf ("%d\n and is less than 6 and not 0" , Lastdigit);
		}


	return (0);
}
