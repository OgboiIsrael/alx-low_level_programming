#include "main.h"

/**
  * puts_half - prints the other half of a str
  * @str: the parameter to be printed
  */

void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	n = (len - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
