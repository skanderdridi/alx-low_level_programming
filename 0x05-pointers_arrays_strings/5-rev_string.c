#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	char c;
	int i, j;

	i = 0;
	while (s[i + 1] != '\0')
	{
		i++;
	}

	j = i;
	i = 0;
	while (i < j / 2 + 1)
	{
		c = s[i];
		s[i] = s[j - i];
		s[j - i] = c;
		i++;
	}
}
