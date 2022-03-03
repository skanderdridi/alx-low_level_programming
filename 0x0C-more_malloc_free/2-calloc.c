#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc -allocates memory for an array.
 * @nmemb: unsigned int.
 * @size: unsigned int.
 * Return: character
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;

	int long i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc((nmemb * size));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i += 1)
		*(buffer + i) = 0;

	return ((void *)buffer);
}
