#include <stdio.h>

/**
 * main - print the combination of two digits
 * without repeating the same digit
 *
 *
 * Return: 0 (success)
 **/
int main(void)
{
	int n, c;

	for (n = 48; n <= 57; n++)
	{
		for (c = n + 1; c <= 57; c++)
		{
			if (c != n)
			{
				putchar(n);
				putchar(c);
				if (!(n == 56 && c == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
