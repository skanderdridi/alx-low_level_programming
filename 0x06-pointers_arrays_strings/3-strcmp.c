#include "main.h"

/**
 * _strcmp - compare two strings and return their difference
 * @s1: string
 * @s2: string
 *
 *
 * Return: difference
 **/
int _strcmp(char *s1, char *s2)
{
int i = 0;

{
    while (*s1 == *s2++)
        if (*s1++ == 0)
            return (0);
    return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}  
    return 0;
}
