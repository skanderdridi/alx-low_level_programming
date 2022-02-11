#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
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
			_putchar('$');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
