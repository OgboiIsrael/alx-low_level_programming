#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ca;
	int cb;

	for (ca = '0'; ca <= '9'; ca++)
	{
		for (cb = (ca + 1); cb <= '9'; cb++)
		{
			putchar(ca);
			putchar(cb);

			if (ca != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
