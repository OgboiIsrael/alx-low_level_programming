#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char unorev;

	unorev = 'z';

	while (unorev >= 'a')
	{
		putchar(unorev);
		unorev--;
	}
	putchar('\n');
	return (0);
}
