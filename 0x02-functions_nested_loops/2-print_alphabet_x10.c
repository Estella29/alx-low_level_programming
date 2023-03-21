#include "main.h"

/**
 * print_alphabet_x10 - makes x10 the alphabet.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x <= 9)

	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

		x++;
	}
}
