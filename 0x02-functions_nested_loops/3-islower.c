#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c: the character being checked
 *
 * Return: 1 for lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

