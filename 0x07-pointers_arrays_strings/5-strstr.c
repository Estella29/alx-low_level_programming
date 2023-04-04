#include "main.h"

/**
 **_strstr- locates a substring.
 *@haystack: string
 *
 *@needle: substring
 *
 * Return: output
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while ((haystack[j] != '\0' || needle[i] != '\0'))
	{
		if (needle[i] == haystack[j])
		{
			j++;
			i++;
		}

		if (needle[i] != '\0')
		{
			return (needle);

		}
	}
	return (NULL);
}

