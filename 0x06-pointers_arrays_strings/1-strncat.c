#include "main.h"

/**
 * *_strncat -  concatenates two strings.
 * @n: number of elements
 * @dest: string to be used
 * @src: string to be used
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)

		dest[i + j] = src[j];

			dest[i + j] = '\0';

	return (dest);
}
