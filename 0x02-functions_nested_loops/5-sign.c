#include "main.h"

/**
 *  print_sign -  prints the sign of a number
 * @c: sign
 *
 * Return: 1 greater 0 equal to zero -1 less than zero
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	return(0);
}

