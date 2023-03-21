#include "main.h"

/**
 * _isalpha - to check for alphabetic character
 *@c: letter to be checked
 *
 * Return: 1 if c is letter else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else
		return (0);

}

