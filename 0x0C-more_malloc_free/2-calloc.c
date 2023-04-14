#include <stdlib.h>
/**
 * _memset - fills memory with constant byte
 * @s: input pointer that represents memory
 * blocks to fill
 * @b: characters to fil
 * @n: number of bytes
 * Return: pointer to filled memory
 */

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
