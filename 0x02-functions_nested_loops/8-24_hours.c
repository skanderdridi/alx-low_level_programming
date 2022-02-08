#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(':');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			putchar('\n');
			j++;
		}
		i++;
	}
}
