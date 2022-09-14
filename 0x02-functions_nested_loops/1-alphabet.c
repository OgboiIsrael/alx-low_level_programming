#include "main.h"

/**
 * print_alphabet - Entry point
 * prints a -z
 * Return: Always 0 Success
 */

void print_alphabet(void)
{
	char prnt;

	for (prnt = 'a'; prnt <= 'z'; prnt++)
	{
		_putchar(prnt);
	}
	_putchar('\n');
}
