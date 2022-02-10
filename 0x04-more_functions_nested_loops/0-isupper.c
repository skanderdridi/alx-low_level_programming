#include "main.h"


/**
 * isupper -  checks for uppercase character.
 * @n: character
 *
 * Return: Returns 1 if c is (uppercase) Returns 0 (otherwise)
 **/
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
    	printf("%c: 1 \n", c);
		return (1);
	}
	else
	{
		printf("%c: 0 \n", c);
			return (0)
	}
}
