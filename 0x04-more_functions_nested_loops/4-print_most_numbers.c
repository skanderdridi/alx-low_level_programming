#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9.
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num < 58; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
