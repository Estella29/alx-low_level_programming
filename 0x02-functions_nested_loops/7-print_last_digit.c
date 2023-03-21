#include "main.h"

/**
 *print_last_digit - prints last digit of number.
 *@x: number to be treated
 *
 * Return: value of last digit
 */
int print_last_digit(int x)
{
int y = x % 10;

	if (y < 0)
	{
		y = y * -1;
	}
		_putchar(y + '0');

		return (y);

}


