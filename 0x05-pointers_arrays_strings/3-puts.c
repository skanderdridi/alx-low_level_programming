#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @str: string
 **/
void _puts(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[l]);
		l++;
	}
}
