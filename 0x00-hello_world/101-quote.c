#include <stdio.h>
#include <unistd.h>
/**
 * main - A c programm that prints a word followed by a new line to the standard error
 *  Return 1 (success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
return (1);
}
