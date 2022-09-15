#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('\\');
		i++;
	}
	if (n = 0){
		_putchar('\n');
	}
	_putchar('\n');
}
