#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function that will write character c
 * @c: The character to print
 * Return: 1 (success)
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
