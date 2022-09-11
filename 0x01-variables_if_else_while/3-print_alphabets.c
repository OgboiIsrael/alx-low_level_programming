#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cL;
	char sl;

	sl = 'a';
	cL = 'A';

	while (sl <= 'z')
	{
		putchar(sl);
		sl++;
	}
	while (cL <= 'Z')
	{
		putchar(cL);
		cL++;
	}
	putchar('\n');
	return (0);
}
