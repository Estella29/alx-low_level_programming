#include "main.h"

/**
 * *cap_string -  capitalizes all words of a string.
 *
 * @str: array to be used
 *
 * Return: character
 */
char *cap_string(char *str)
{
	int c = 0;

	while (str[c])
	{
	while (!(str[c] >= 97 && str[c] <= 122))
		c++;
	if (str[c - 1] == 32 || str[c - 1] == 9
	|| str[c - 1] == 10 || str[c - 1] == 44 ||
	str[c - 1] == 59 || str[c - 1] == 46 ||
	str[c - 1] == 33 || str[c - 1] == 63 ||
	str[c - 1] == 34 || str[c - 1] == 40 ||
	str[c - 1] == 41 || str[c - 1] == 123 ||
	str[c - 1] == 125 || c == 0)

		str[c] -= 32;
	c++;
	}
	return (str);
}

