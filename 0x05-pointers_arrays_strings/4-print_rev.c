#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 **/
void print_rev(char *s);
{
	int l = 0;

	while (l >= 0)
	{
		if (s[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(strrev(s[l]));
		l++;
	}
	_putchar('\n')
}


