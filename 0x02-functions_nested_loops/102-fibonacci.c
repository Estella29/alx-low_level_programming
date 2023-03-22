#include "stdio.h"

/**
 *main - prints first 50 fibonacci numbers
 *
 * Return: output
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int i;
	int num;

	for (i = 1; i < num; i++)
	{
		while (i < 50)
		{
			if (i <= 1)
				c = i;
		}
			else
			{
				c = a + b;
				printf("%d, ", c);

			a = b;
			b = c;
			}

		return (0);
	}
}
