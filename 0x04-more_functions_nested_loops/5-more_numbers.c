#include "main.h"


/**
 * more_number - print 10 times the number since 0 up to 14
 *
 * Return:10 times of the number since 0 up to 14
 *
 */

void more_number(void)

{

	int x, y;	
	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar ((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar ('\n')
	}
}
