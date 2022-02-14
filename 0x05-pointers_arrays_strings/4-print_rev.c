#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 **/
void print_rev(char *s)
{
	int l = 0;

	while (l >= 0)
	{
		if (s[l] == '\0')
			break;
		count++;
	}

	for (count--; l >= 0; l--)
		_putchar(s[l]);
	_putchar('\n');
}
