#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		int j = n % 3;
		int k = n % 5;

		if (j == 0 && k == 0)
		{
			printf("FizzBuzz ");
		}
		if (j == 0 && k > 0)
		{
			printf("Fizz ");
		}
		if (k == 0 && j > 0)
		{
			printf("Buzz ");
		}
		if (k > 0 && j > 0)
		{
			printf("%d ", n);
		}

	}
	printf("\n");
	return (0);
}
