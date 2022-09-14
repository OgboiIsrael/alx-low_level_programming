#include "main.h"

/**
 * print_alphabet - Entry point
 * prints a -z
 * Return: Always 0 Success
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
