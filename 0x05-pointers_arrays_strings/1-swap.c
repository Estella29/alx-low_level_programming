/**
 * swap_int - swaps the values of two integers
*
 *@a: input parameter 1
 * @b: input parameter 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
