#include "main.h"

/**
 * print_alphabet - Entry point
 * prints a -z
 * Return: Always 0 Success
 */

void print_alphabet(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		putchar(alb);
	}
	putchar('\n');
	return (0);
}
