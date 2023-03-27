#include "main.h"

/**
 * print_rev -  prints a string, in reverse
*
 * @s: string parameter to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; ++length)
		;
	for (--length; length >= 0; --length)
		_putchar(s[length]);
	_putchar('\n');
}
