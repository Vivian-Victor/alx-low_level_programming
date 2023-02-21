#include "main.h"

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	char c[8] = "_putchar";
	int x = 0;

	while (x < 7)
	{
		_putchar(c[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
