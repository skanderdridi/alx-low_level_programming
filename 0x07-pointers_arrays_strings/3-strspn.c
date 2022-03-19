#include "main.h"
/**
 * _strspn - count characters equals since find space
 * @s: String to find accept characters and count yours consist before space
 * @accept: characters to count
 * Return: number of consist before spaces.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int len =0;
    if((s == NULL) || (accept == NULL))
        return len;
    while(*s && strchr(accept,*s++))
    {
        len++;
    }
    return len;
}
