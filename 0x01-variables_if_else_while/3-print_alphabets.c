#include <stdio.h>
#include <stdlib.h>

/**
 * main - The starting point of our program
 *
 * Return: 0 Always.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);

		c++;

	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);

}
