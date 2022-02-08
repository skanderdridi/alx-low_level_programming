#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * in lowecase.
 *
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	int i, x;

	x = 1;
	while (x <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		x++;
	}
}
