#include "main.h"

/**
 * sqrt - returns the natural square root of a number.
 * @n: number to check
 * @m: number to iterate
 * Return: square root
 */

int sqrt2(int n, int m)
{
	if (m * m  == n)
	{
		return (m);

	if (m * m  > n)

		return (-1);
	}
	return (sqrt2(n, m + 1));
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
	return (sqrt2(n, 1));
}
