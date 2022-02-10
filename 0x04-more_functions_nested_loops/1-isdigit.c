#include "main.h"
#include <stdio.h>

/**
 * isdigit - checks for a digit (0 through 9).
 * @n: character
 *
 * Return: Returns 1 if c is (uppercase) Returns 0 (otherwise)
 **/
int _isdigit(int)
{
    int c;
    c = '';
    
    if (c >= '0' && c <= '9')
    {
    	printf("%c: 1 \n", c);
	}
	else
	{
		printf("%c: 0 \n", c);
	}
	return(0);
}
