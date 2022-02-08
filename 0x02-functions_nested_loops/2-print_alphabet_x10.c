#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * in lowecase.
 *
 * Return: 0
 **/
int main(void)
{
	int i, x;

	x = 1;
	while (x <= 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		x++;
	}
}
