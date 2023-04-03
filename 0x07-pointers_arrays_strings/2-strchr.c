#include "main.h"

/**
 **_strchr - pointer to the first occurrence of the character
 *@s: pointer
 *
 *@c: character
 *
 * Return: output
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
