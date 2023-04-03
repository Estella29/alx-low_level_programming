#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: pointer
 *
 *@accept: pointer
 *
 * Return: output
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, found;

		found = 0;
		while (s[found] != '\0')
		{
			count = 0;
			while (accept[count] != '\0' && s[found] != accept[count])
			count++;
			if (accept[count] == '\0')
				return (found);
			found++;
	}
	return (found);

}
