#include "main.h"
#include <stdio.h>
/**
 **_print_rev_recursion- prints  a string
 * @s: input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
