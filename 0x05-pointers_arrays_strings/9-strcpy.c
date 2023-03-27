#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src,
* including the terminating null byte (\0)
*to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x, y = 0;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y] = src[x];
		++y;
	}
	dest[y] = '\0';
	return (dest);
}
