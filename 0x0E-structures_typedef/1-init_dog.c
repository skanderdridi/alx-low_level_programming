#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variables
 * @d: initializaiton
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
