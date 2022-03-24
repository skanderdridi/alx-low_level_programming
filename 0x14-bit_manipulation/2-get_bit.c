#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);
	for (; i < index; i++)
	{
		if (i >= 64)
			return (-1);
		n = n >> 1;
	}
	return (n & 1);
}
