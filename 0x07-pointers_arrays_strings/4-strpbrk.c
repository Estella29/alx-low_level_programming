#include "main.h"

/**
 **_strpbrk- searches a string for any of a set of bytes.
 *@s: pointer
 *
 *@accept: array of bytes to search for
 *
 * Return: output
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (*s == accept[j])

			return (s);
	}
	s++;
	}
		return (NULL);
}
