#include "main.h"

/**
 * _strcmp-  compares two strings.
 *
 * @s1: string to be used
 * @s2: string to be used
 * Return: string
 *
 */
int _strcmp(char *s1, char *s2)
{
	int result, i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	result = s1[i] - s2[i];
	return (result);
}

