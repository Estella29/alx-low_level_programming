#include "main.h"
/**
 * prime - checks if input is prime number
 * @m: equals n
 * @l: num to iterate
 * Return: 1 0r 0
 */
int prime(int m, int l)
{
	if (m == l)
		return (1);
	else if (m % l == 0)
		return (0);
	return (prime(m, l + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime
 * number.
 *
 * @n: number to be checked
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
