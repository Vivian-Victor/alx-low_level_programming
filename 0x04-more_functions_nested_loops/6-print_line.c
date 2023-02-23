#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: number of times the caharacter _ should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
