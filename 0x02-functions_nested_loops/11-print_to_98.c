#include "main.h"
#include <stdio.h>
/**
 * print_t0_98 - A function that prints all natural numbers
 * @n:number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{

while (n < 98)
{
	printf("%d, ", n);
	n++;
}
while (n > 98)
{
	printf("%d, ", n);
	n--;
}

printf("98");
putchar('\n');
}
