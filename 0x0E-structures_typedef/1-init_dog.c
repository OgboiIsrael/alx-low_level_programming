#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @bingo: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */

void init_dog(struct dog *bingo, char *name, float age, char *owner)
{
	if (bingo)
	{
		bingo->name = name;
		bingo->age = age;
		bingo->owner = owner;
	}
}
