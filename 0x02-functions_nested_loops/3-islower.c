#include "main.h"

/**
 * _isalpha - check whether character is alpabetical
 * or not.
 *
 * Return: 1 alphabetical 0 otherwise
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
