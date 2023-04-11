#include <stdio.h>
#include <stdlib.h>

/**
 * maun - prints the minimum number of coins to
 * 	make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array poiters to the arguments.
 *
 * Return: if the number of argument is not exactly one - 1.
 * 	   Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cent, coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cent -=25;
			continue;
		}
		if ((cents - 10)>=0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0;
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%\n", coins);

	return (0);
}
