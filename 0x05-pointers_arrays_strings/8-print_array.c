#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
*@n: number of elements of the array to be printed
 * @a: parameter to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - i))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
