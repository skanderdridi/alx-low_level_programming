#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocate memory and verif
 * @b: int
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *pointer_checked;

	pointer_checked = malloc(b);

	if (pointer_checked == NULL)
		exit(98);

	return (pointer_checked);
}
