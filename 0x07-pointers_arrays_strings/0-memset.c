#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @*s: char
 * @b: char
 * @unsigned int: n
 *
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)

{
    unsigned char* p=s;
    while(n--)
    {
        *p++ = (unsigned char)b;
    }
    return s;
}
