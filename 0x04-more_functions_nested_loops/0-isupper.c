#include "main.h"
#include <stdio.h>

/**
 * isupper -  checks for uppercase character.
 * @n: character
 *
 * Return: Returns 1 if c is (uppercase) Returns 0 (otherwise)
 **/
int _isupper(int)
{
    char c;
    c = 'A';
    
    if (c >= 'A' && c <= 'Z')
    {
    	printf("%c: 1 \n", c);
	}
	else
	{
		printf("%c: 0 \n", c);
	}
	return(0);
}
