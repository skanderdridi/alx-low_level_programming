#include "main.h"

/**
 * _isalpha - check if character is alphabetic
 * @c: character
 *
 *
 * Return: 1 alphabetic 0 otherwise
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
