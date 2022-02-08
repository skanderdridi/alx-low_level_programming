#include "main.h"

/**
 * _isalpha - check whether character is alpabetical
 * or not.
 * @c: the character
 *
 * Return: 1 (alphabetical) 0 (otherwise)
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
