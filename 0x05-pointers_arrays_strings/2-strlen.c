#include "main.h"

/**
 * int _strlen - eturns the length of a string
 *
 * @a: string var
 * @b: length var
 * return: length
 **/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
