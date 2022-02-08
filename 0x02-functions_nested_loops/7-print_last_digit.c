#include <stdio.h>

/**
 * print_last_digit_get_last_digit_of_number
 * @n: number
 *
 * Return: last digit
 **/
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
	}
	else
	{
		l = -(n % 10);
	}
	putchar(l + '0');
	return (l);
}
