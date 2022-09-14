#include "main.h"

/**
* _islower - check the code.
* @c: Check the code.
* Return: Always 0.
*/

int _islower(int c)
{
	char a;

	if (a >= 'a' && a <= 'z')
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
