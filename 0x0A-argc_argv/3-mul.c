#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argumnets
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	/** atoi is used to convert string numbers to integers*/
	return (0);
}
