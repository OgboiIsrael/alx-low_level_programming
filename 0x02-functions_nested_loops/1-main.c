#include <stdio.h>

/**
 *
 * main - check the code
 *
 *
 *
 * Return: Always 0.
 *
 */

void print_alphabet(void)

{

	char p;


	for (p = 'a'; p <= 'z'; p++)

	{

		putchar(p);
	}
	putchar('\n');

}


int main(void)

{

	print_alphabet();

	return (0);

}
