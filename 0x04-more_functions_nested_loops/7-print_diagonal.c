#include "main.h"

/**
 * print - print diagonal line '\$' n times
 * @n: time of n
 *
 * Return: void
 **/
void print_diagonal(int n)
{

	int l, s;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			for (s = 1; s <= l - 1; s++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
