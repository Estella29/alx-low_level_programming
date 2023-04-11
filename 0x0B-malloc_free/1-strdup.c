#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -   returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * and initializes it with a specific char.
 * @str: string given
 *
 * Return: pointer to string(sucess) or Null(fails)
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);
	while ((copy[i] = str[i]) != '\0')
		i++;
	return (copy);
}
