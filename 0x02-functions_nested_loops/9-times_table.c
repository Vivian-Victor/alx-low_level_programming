#include "main.h"

/**
 * times_table - A function that prints a times table
 * Return:void
 */

void times_table(void)
{

int a = 0;
int b;
int rep;

for (a = 0;  a <= 9; a++)
{
	_putchar('0');

	for (b = 1; b <= 9; b++)
	{
		_putchar(',');
		_putchar(' ');

		rep = a * b;

		if (rep <= 9)
			_putchar(' ');
		else
			_putchar((rep / 10) + '0');

		_putchar((rep % 10) + '0');
	}
	_putchar('\n');
}
}
