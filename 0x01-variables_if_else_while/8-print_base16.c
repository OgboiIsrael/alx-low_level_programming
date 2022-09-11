#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwats 0 (Success)
 */

int main(void)
{
	int num;
	char letters;

	num = '0';
	letters = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
