#include "main.h"

/**
 * _strncpy - copy n bytes of string
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 **/
char *_strncat(char *dest, char *src, int n)
{
    if (dest == NULL)
	{
        return NULL;
    }
    char* ptr = dest;
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
