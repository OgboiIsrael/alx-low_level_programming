#include "main.h"

/**
  * swap_int - A func that swaps the alue of two ints
  *@a: to be swapped
  *@b: to be swapped
  */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
