#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty
  */
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b) % 10;
			d = (a * b) / 10;
			if (d > 0)
				_putchar(d + '0');
			_putchar(c + '0');

			if (b != 9)
			{
				_putchar(',');
				if (a * (b + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
