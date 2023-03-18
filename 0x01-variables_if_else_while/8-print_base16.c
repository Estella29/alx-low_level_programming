#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char x;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
	putchar(x);
	}

                putchar('\n');
	return (0);	
}
