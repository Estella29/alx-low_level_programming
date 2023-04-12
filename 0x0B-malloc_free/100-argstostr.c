#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program.
 *
 *
 * @ac: argument count
 * @av: argument vector
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, length;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++;
	}
	s = malloc((length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	c = 0;
		for (a = 0; a < ac; a++)
		{
			for (b = 0; av[a][b] != '\0'; b++)
			{
				s[c] = av[a][b];
				c++;
			}
			s[c] = '\n';
			c++;
		}

			s[c] = '\0';
			return (s);
}
