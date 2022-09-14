#include <stdio.h>

/**
 * main - program entrypoint
 * Description - to print putchar
 * Return: always 0 success
 */

int main(void)
{
	char prnt[] = "_putchar";
	int wrd;

	for (wrd = 0; wrd < 8; wrd++)
	{
		putchar(prnt[wrd]);
	}
	putchar('\n');
	return (0);
}
