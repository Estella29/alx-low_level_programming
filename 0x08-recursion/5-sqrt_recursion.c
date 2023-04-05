#include "main.h"

/**
 * sqrt - returns the natural square root of a number.
 * @n: number to check
 * @m: number to iterate
 * Return: square root
 */

int sqrt2(int n, int m)
{
	if (m % (n / m)  == 0)
	{
	if (m * (n / m)  == n)
	return (m);
	else
		return (-1);
	}
	return (0 + sqrt2(n, m + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *
 * @n: number to be checked
 *
 * Return: -1, If n does not have a natural square root,
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
        return (sqrt2(n, 2));
}
