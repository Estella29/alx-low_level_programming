#include "main.h"

/**
 * *_strncpy -  copies a string.
 *@n: number of bytes
 * @dest: string to be used
 * @src: string to be used
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
