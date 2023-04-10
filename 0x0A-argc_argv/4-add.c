#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, sum = 0;

	for (n1 = 0; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2] != '\0'; n2++)
		{
			if (!isdigit(argv[n1][n2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n1]);
	}
	printf("%d\n", sum);
	return (0);
}

