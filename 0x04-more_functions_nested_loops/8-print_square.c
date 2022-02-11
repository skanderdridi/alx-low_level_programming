#include "main.h"


/**
 * print_square - prints a square, followed by a new line.
 * @size: size
 *
 * Return: nothing
 **/
void print_square(int size)
{
	int l, s;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (s = 1; s <= size; s++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
