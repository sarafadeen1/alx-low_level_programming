#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * positive_or_negative -> print if the number is a positive, zero, or negative
 *
 * Description: print value of n satus; zero, positive or negative
 * @i: added num
 * Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
