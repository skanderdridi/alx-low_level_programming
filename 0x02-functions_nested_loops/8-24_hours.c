#include "main.h"

/**
 * jack_bauer - return all minutes of day
 *
 * Return: nothing
 **/
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
