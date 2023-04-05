#include "main.h"

/**
 * _strlen_recursion - checks and returns the
 * length of a string.
 *
 * @s: string to be checked
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	return (0);
}

/**
 * compare - compares each character of the string
 * @s: string to check
 * @num1:  iterator
 * @num2: iterator
 * Return: 1 or 0
 */
int compare(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + compare(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome -  checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
