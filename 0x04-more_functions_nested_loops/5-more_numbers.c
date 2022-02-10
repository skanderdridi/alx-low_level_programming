#include "main.h"
/**
 * more_numbers - prints numbers(à-14)
 *
 * Return: void doesn't return
 */
void more_numbers(void)
{
	int n;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
