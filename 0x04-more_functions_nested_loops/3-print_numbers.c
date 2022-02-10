#include "main.h"

/**
 * mul - prints the numbers, from 0 to 9, followed by a new line.
 * @a: numbers
 * Return: to_numbers.
 */
void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
