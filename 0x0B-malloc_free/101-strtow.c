#include <stdlib.h>
#include "main.h"

/**
 * word_count - helper function to count numbers
 *
 * @str:  The string to evaluate
 * Return: number of words
 */
int word_count(char *str)
{	int count, words, flag;

	flag = 0;
	words = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}
	return (words);
}

/**
 * **strtow - splits a string into words.
 *
 * @str:  The string
 * Return: null
 */
char **strtow(char *str)
{
	char **ptr, *tmp;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	len++;
	words = word_count(str);

	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = 1;
	}
	ptr[b] = NULL;

	return (ptr);
}
