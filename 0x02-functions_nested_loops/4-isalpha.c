#include "main.h"

/**
 * _islower - check if character is alphabetic
 * @c: character
 *
 *
 * Return: 1 alphabetic 0 otherwise
 **/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
