#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: string to be append
  * @src: string to apend
  * Return: the appended str
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
