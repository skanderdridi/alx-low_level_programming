#include "main.h"

/**
 * *_memcpy -  copies memory area
 * @*dest: char
 * @*src: char
 * @unsigned int: n
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *pdest = (char *)dest;
    const char *psource =( const char*)src;
    if((pdest!= NULL) && (psource!= NULL))
    {
        while(n)
        {
            *(pdest++)= *(psource++);
            --n;
        }
    }
    return dest;
}
