
#include <stdlib>
#include <stdio.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* functions for 101-mul.c*/

/**
 * error_exit - prints error with _putchar
 * and exits with 98
 *
 * Return: Error 98 and exit(98)
 */
int error_exit(void)
{
	char *error;
	int a;

	error = "Error";
	for (a = 0; error[a] != '\0'; a++)
		_putchar(error[a]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - checks if string has 
 * only numbers 
 *@str: string to check
 *
 * Return: 0(true) and 1(false)
 */
int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _length - get the length of strings
 *
 * @str: the string to get length of
 *
 * Return: length of string
 */
int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

