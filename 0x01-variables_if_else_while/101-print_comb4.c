#include <stdio.h>

/**
 * main - print the combination of three digits
 * without repeating the same digit
 *
 *
 * Return: 0 (success)
 **/
int main(void)
{
	int n, c, m;

	for (n = 48; n <= 57; n++)
	{
		for (c = n + 1; c <= 57; c++)
		{
			for (m = c + 1; m <= 57; m++)
			{
				if (c != n && m != c)
				{
					putchar(n);
					putchar(c);
					putchar(m);
					if (!(n == 55 && c == 56 && m == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	
	return (0);
}
