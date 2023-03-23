#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: number to be printed
 * Return: void
 *
 */
void print_line(int n)
{
		
	for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
