#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num;

	if ((n ^ m) == 0)
		return (count);
	num = n ^ m;
	while (num != 0)
	{
		count += num & 1;
		num = num >> 1;
	}
	return (count);
}
