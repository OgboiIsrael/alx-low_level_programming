#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char one;

	one = 'a';

	while (one <= 'z')
	{
		if (one != 'e' && one != 'q')
		{
			putchar(one);
		}
		one++;
	}
	putchar('\n');
	return (0);
}
