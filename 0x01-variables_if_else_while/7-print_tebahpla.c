#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the alphabet in reverse (lowercase), followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
